#include <iostream>
#include <vector>
#include <string>

#define LINHA "--------------------------------"

using namespace std;

// #include "validacoes.cpp"
// #include "modulo_passageiros.cpp"
// #include "modulo_roteiros.cpp"
// escrever validacao nome (campo vazio), se é numero e a data certinha

struct Passageiro {
    string cpf;
    string nome;
    int data_nascimento;
    int num_autorizacao;
};

struct Roteiro {
    int codigo;
    int data_hora_prevista;
    int duracao_prevista;
    string origem;
    string destino;
};

/* PROTÓTIPOS DAS FUNÇÕES */



// FUNÇÃO PRINCIPAL

/* FUNÇÕES */

bool validarCPF(string cpf)
{
    //verificar se todos os caracteres são dígitos
    for (unsigned int i = 0; i < cpf.length(); i++) 
    {
       if (!isdigit(cpf[i])) {
           return false;
       }
    }
    
    //verificar se possui 11 caracteres
    return cpf.length() != 11 ? false : true;
}

void exibirMenuOpcoesPassageiro(void) 
{
    cout << "\nMENU DE OPÇÕES - Digite um número" << endl <<
    LINHA << endl <<
    "1. Incluir. " << endl <<
    "2. Excluir " << endl <<
    "3. Alterar (apenas por CPF) " << endl <<
    "4. Listar " << endl <<
    "5. Localizar (por CPF) " << endl <<
    "0. Sair. " << endl << endl <<
    "Número: ";
}

string pedirCPF(string acao)
{
    string cpf = "";

    cout << "Informe o CPF do passageiro a ser " << acao << ": ";
    cin >> cpf;
}

// encontrar o passageiro pelo CPF
int pegarIndicePorCPF(vector<Passageiro> &passageiros, string cpf)
{
    int indice_passageiro = -1; 
    int i = 0;

    for (Passageiro passageiro: passageiros)
    {
        if (passageiro.cpf == cpf) // sugestão: ver com iterator n implicito
        {
            indice_passageiro = i;
        }

        i++;
    }

    return indice_passageiro;
}
    

void inserirPassageiro(vector<Passageiro> &passageiros) // é mesmo Passageiro ou n void?
{
    cout << "OPÇÃO - INSERIR PASSAGEIRO" << endl
    << LINHA << endl;

    Passageiro pessoa;

    cout << "CPF: ";
    cin >> pessoa.cpf;

    cout << "Nome: ";
    cin >> pessoa.nome;

    cout << "Data de nascimento: ";
    cin >> pessoa.data_nascimento;
    //verificar se é valido
    cout << "Número de autorização: "; //se for 0, n é de menor
    cin >> pessoa.num_autorizacao;

    passageiros.push_back(pessoa);
}

int excluirPassageiro(vector<Passageiro> &passageiros) 
{
    cout << "OPÇÃO - EXCLUIR PASSAGEIRO" << endl
    << LINHA << endl;

    string cpf = pedirCPF("excluído");

    //validar CPF
    //cpf n encontrado

    int indice_passageiro = pegarIndicePorCPF(passageiros, cpf);

    if (indice_passageiro == -1)
    {
        return 1;
    }
    else {
        vector<Passageiro>::iterator it;
        it = passageiros.begin();
        advance(it, indice_passageiro);
        passageiros.erase(it);
    }

    return 0;    
}

void alterarPassageiro(vector<Passageiro> &passageiros)
{
    cout << "OPÇÃO - ALTERAR PASSAGEIRO" << endl
    << LINHA << endl;

    string cpf = pedirCPF("alterado");

    int indice_passageiro = pegarIndicePorCPF(passageiros, cpf);
    Passageiro passageiro = passageiros[indice_passageiro];

    cout << 
    "CPF: " << passageiro.cpf << endl <<
    "Nome: " << passageiro.nome << endl <<
    "Data de nascimento: " << passageiro.data_nascimento  << endl <<
    "Número de autorização: " << passageiro.num_autorizacao << endl <<
    LINHA << endl;

}

void listarPassageiros(vector<Passageiro> &passageiros) 
{
    cout << "OPÇÃO - LISTAR PASSAGEIROS REGISTRADOS" << endl <<
    LINHA << endl;

    int i = 1;

    if (passageiros.size() == 0)
    {
        cout << "Não há nenhum passageiro registrado." << endl;
    }
    else 
    {
        for (Passageiro passageiro: passageiros)
        {
            cout << "Passageiro " << i << endl <<
            "CPF: " << passageiro.cpf << endl <<
            "Nome: " << passageiro.nome << endl <<
            "Data de nascimento: " << passageiro.data_nascimento  << endl <<
            "Número de autorização: " << passageiro.num_autorizacao << endl <<
            LINHA << endl;
            
            i++;
        }
        cout << "Total de passageiros: " << i << endl;
    }
}

int localizarPassageiro(vector<Passageiro> &passageiros) {
    cout << "OPÇÃO - LOCALIZAR PASSAGEIRO" << endl
    << LINHA << endl;

    string cpf = pedirCPF("localizado");

    int indice_passageiro = pegarIndicePorCPF(passageiros, cpf);

    if (indice_passageiro == -1)
    {
        return 1;
    }
    else 
    {
        Passageiro passageiro = passageiros[indice_passageiro];

        cout << 
        "CPF: " << passageiro.cpf << endl <<
        "Nome: " << passageiro.nome << endl <<
        "Data de nascimento: " << passageiro.data_nascimento  << endl <<
        "Número de autorização: " << passageiro.num_autorizacao << endl <<
        LINHA << endl;
    }

    return 0;
}

int main (void) 
{
    // inicializando vetores
    vector<Passageiro> passageiros;
    vector<Roteiro> roteiros;

    int opcao_usuario = 0;

    do {
        exibirMenuOpcoesPassageiro();
        cin >> opcao_usuario;
        
        cout << endl; //ou melhor usar "\n\n?"

        switch (opcao_usuario)
        {
            case 0:
                break;
            case 1: //inserir
            {
                inserirPassageiro(passageiros);
                break;
            }
            case 2: //excluir
            {
                if(excluirPassageiro(passageiros))
                {
                    cout << "Aviso: CPF inválido ou inexistente." << endl;
                }
                break;
            }
            case 3:
                {break;}
            case 4:
                listarPassageiros(passageiros);
                break;
            case 5:
                if(localizarPassageiro(passageiros))
                {
                    cout << "Aviso: CPF inválido ou inexistente." << endl;
                }
                break;
            
            default:
                cout << "Aviso: Insira um dos números válidos." << endl;
                break;
        }
    }
    while (opcao_usuario != 0);


    return 0;
}
