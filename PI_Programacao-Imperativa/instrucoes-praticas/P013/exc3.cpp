#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/* STRUCTS */

struct Produto {
    string codigo, 
           nome;
    float preco;
};

/* PROTÓTIPOS E DESCRIÇÕES */

int executarOpcaoInserirProduto(vector<Produto> &);                         // Função responsável por inserir produto
int executarOpcaoExcluirProduto(vector<Produto> &);                         // Função responsável por inserir produto
int executarOpcaoListarProdutos(vector<Produto> &);                         // Função responsável por inserir produto
int executarOpcaoConsultarPreco(vector<Produto> &);                         // Função responsável por inserir produto
void exibirOpcoesMenu();                                                    // Exibir opções no menu para o usuário
void pedirCodigo(string &);                                                 // Função auxiliar para pedir código ao usuário e armazenar em string anteriormente criada
bool validarCodigo(string);                                                 // Validação do código, obedecendo às regras de negócio
bool validarNome(string);                                                   // Validação do nome, obedecendo às regras de negócio
bool validarCasasDecimais(float, unsigned int = 2);                         // Validação da quantidade de casas decimais, obedecendo às regras de negócio
bool isCodigoRepetido(vector<Produto> &, string);                           // Verificar se o código já não existe
bool isNomeRepetido(vector<Produto> &, string);                             // Verificar se o nome já não existe
int pegarIndiceProduto(vector<Produto> &, string);                          // Pegar o índice de um produto a partir do seu código
int contarQuantidadeProdutos(vector<Produto> &);                            // Contabilizar quantidade de produtos já cadastrados

/* FUNÇÃO PRINCIPAL */

int main (void) 
{
    int opcao_usuario;
    vector<Produto> produtos;
    char flag;

    do {
        exibirOpcoesMenu();
        
        cout << "Opção: ";
        cin >> opcao_usuario;
        cout << endl;

        switch (opcao_usuario)
        {
            case 1:
                if ( executarOpcaoInserirProduto(produtos) == 0 ) {
                    cout << endl << "Produto inserido com sucesso! \n";
                }

                break;

            case 2:
                if ( executarOpcaoExcluirProduto(produtos) == 0 ) {
                    cout << "Produto excluído com sucesso! \n";
                }
                
                break;

            case 3:
                if ( executarOpcaoListarProdutos(produtos) == 1 ) {
                    cout << endl << "Não há produtos cadastrados no momento. \n";
                }
                
                break;

            case 4:
                if ( executarOpcaoConsultarPreco(produtos) == 1 ) {
                     cout << endl << "Aviso: Este produto não está cadastrado. \n";
                }
                
                break;

            default:
                cout << endl << "Aviso: Insira um valor entre 1 e 4. \n";
                break;
        };

        cout << "Deseja prosseguir (s/n)? ";
        cin >> flag;
    } while (flag == 's' || flag == 'S' || (flag != 'n' && flag != 'N'));

    
    return 0;
}

/* DEMAIS FUNÇÕES */

int executarOpcaoInserirProduto(vector<Produto> &produtos) 
{
    Produto produto;
    bool flag;

    //verificar se cota máxima foi atingida
    if (contarQuantidadeProdutos(produtos) > 300)
    {
        cout << "Cota máxima de até 300 produtos diferentes atingida." << endl;
        
        return 0;
    }

    cout << "Insira os dados do produto." << endl;

    //código do produto
    do {
        cout << "Código: ";
        cin >> produto.codigo;
        
        //verificar se já não existe um igual
        if ( isCodigoRepetido(produtos, produto.codigo) ) 
        {
            cout << "Aviso: Já existe um código igual a esse. Favor inserir um diferente." << endl;
            flag = true;
        } 
        //verificar se o código é válido
        else if ( validarCodigo(produto.codigo) == false ) 
        {
            cout << "Aviso: Este é um código inválido. Tente novamente." << endl;
            flag = true;
        } 
        else {
            flag = false;
        }
    } while ( flag == true );

    //nome do produto    
    do {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, produto.nome);
        
        if ( isNomeRepetido(produtos, produto.nome) ) 
        {
            cout << "Aviso: Já existe um nome igual a esse. Favor inserir um diferente." << endl;
            flag = true;
        } 
        //verificar se já não existe um igual
        else if ( validarNome(produto.nome) == false ) 
        {
            cout << "Aviso: O nome deve possuir até 20 caracteres. Tente novamente." << endl;
            flag = true;
        } 
        else {
            flag = false;
        }
    } while ( flag == true );

    //preço do produto
    do {
        cout << "Preço: ";
        cin >> produto.preco;
        
        //verificar se já não existe um igual
        if ( validarCasasDecimais(produto.preco) == false ) 
        {
            cout << "Aviso: Insira preços com 2 casas decimais. Tente novamente." << endl;
            flag = true;
        } 
        else {
            flag = false;
        }
    } while ( flag == true );

    //inserir produto após execução bem-sucedida
    produtos.push_back(produto);

    return 0;
}

int executarOpcaoExcluirProduto(vector<Produto> &produtos)
{
    string codigo;
    pedirCodigo(codigo);
    
    //pegar indice
    int indice = pegarIndiceProduto(produtos, codigo); 

    //verificar existência do produto
    if (indice == -1) {
        cout << "Aviso: Este produto não está cadastrado." << endl;

        return 1;
    }
    //excluir produto
    else {
        produtos.erase(produtos.begin() + indice);
    }

    return 0;
}

int executarOpcaoListarProdutos(vector<Produto> &produtos)
{
    unsigned int qtde_produtos = contarQuantidadeProdutos(produtos);

    if (qtde_produtos == 0) {
        return 1;
    }
    else 
    {
        cout << fixed << setprecision(2);

        for (unsigned int i = 0; i < qtde_produtos; i++)
        {
            cout << "PRODUTO " + to_string(i + 1) + "\n" <<
            "Código: " << produtos[i].codigo << setw(20) <<
            " | Nome: " << produtos[i].nome << setw(20) <<
            " | Preço: " << produtos[i].preco << endl;
        }
    }

    return 0;
}

int executarOpcaoConsultarPreco(vector<Produto> &produtos)
{
    string codigo;
    pedirCodigo(codigo);

    //pegar indice
    int indice = pegarIndiceProduto(produtos, codigo); 

    //verificar se existe
    if (indice == -1) {
        return 1;
    }
    //imprimir preço
    else {
        cout << "Preço do produto " << produtos[indice].nome << " é: " << produtos[indice].preco << endl;
    }

    return 0;
    
}

void exibirOpcoesMenu()
{
    cout << "SUPERMERCADO CESTÃO DA ECONOMIA \n" <<
    "------------------------------------------- \n" <<
    "1. Inserir um novo produto; \n" <<
    "2. Excluir um produto cadastrado; \n" <<
    "3. Listar todos os produtos; \n" <<
    "4. Consultar o preço de um produto. \n" << endl;
}

void pedirCodigo(string &codigo)
{
    cout << "Insira o código do produto: ";
    cin >> codigo;
}

bool validarCodigo(string codigo)
{
    int tamanho_codigo = codigo.length();

    if (tamanho_codigo != 13) {
        return false;
    }

    for (int i = 0; i < tamanho_codigo; i++) {
        if ( !isdigit(codigo[i]) ) {
            return false;
        }
    }

    return true;
}

bool validarNome(string nome)
{
    if (nome.empty() || nome.length() > 20) {
        return false;
    }

    return true;
}

bool validarCasasDecimais(float numero, unsigned int qtde_casas)
{
    ostringstream ss;
    ss << numero; // converter numero em string

    string texto_numero = ss.str();
    size_t indice = texto_numero.find('.'); // encontrar posição do decimal
    string decimais = texto_numero.substr(indice + 1); // extrair parte decimal da string

    return decimais.length() == qtde_casas;
}

bool isCodigoRepetido(vector<Produto> &produtos, string codigo)
{
    for (unsigned int i = 0; i < produtos.size(); i++) {
        if ( produtos[i].codigo == codigo ) {
            return true;
        }
    }

    return false;
}

bool isNomeRepetido(vector<Produto> &produtos, string nome)
{
    for (unsigned int i = 0; i < produtos.size(); i++) 
    {
        if ( produtos[i].nome == nome ) {
            return true;
        }
    }

    return false;
}

int pegarIndiceProduto(vector<Produto> &produtos, string codigo)
{
    int indice = -1;

    for (unsigned int i = 0; i < produtos.size(); i++)
    {
        if (produtos[i].codigo == codigo) 
        {
            indice = i;

            return indice;
        }
    }

    return indice;
}

int contarQuantidadeProdutos(vector<Produto> &produtos)
{
    return produtos.size();
} 