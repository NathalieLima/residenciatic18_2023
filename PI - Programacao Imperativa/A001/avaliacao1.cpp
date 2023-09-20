#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

struct Passageiro {
    string cpf;
    string nome;
    int dt_nascimento;
    int num_autorizacao;
};

struct Roteiro {
    int codigo;
    int data_hora_prevista;
    int duracao_prevista;
    string origem;
    string destino;
};

// protótipo das funções

void exibirMenuOpcoesPassageiro(void);
bool validaCPF(string);

// funções

int main (void) 
{
    int opcao_usuario = 0;
    exibirMenuOpcoesPassageiro();
    cin >> opcao_usuario;
    
    cout << validaCPF("123123");
    
    switch (opcao_usuario)
    {
        case 0: //sair
            cout << "Teste";
            break;
        case 1: //inserir
            inserirPassageiro("Náthalie");
            break;
        case 2:
            cout << "Teste";
            break;
        case 3:
            cout << "Teste";
            break;
        case 4:
            cout << "Teste";
            break;
        case 5:
            cout << "Teste";
            break;
        
        default:
            cout << "Insira um dos números válidos.";
            break;
    }

    return 0;
}

void exibirMenuOpcoesPassageiro(void) 
{
    cout << "MENU DE OPÇÕES - Digite um número" << endl <<
    "1. Incluir. " << endl <<
    "2. Excluir " << endl <<
    "3. Alterar (apenas por CPF) " << endl <<
    "4. Listar " << endl <<
    "5. Localizar (por CPF) " << endl <<
    "0. Sair. " << endl <<
    "Número: " << endl;
}

bool validaCPF(string cpf)
{
    return cpf.length() != 11 ? 1 : 0;
}

void inserirPassageiro() {
    // verificar se é CPF válido
    cout << "Insira os dados do passageiro: ";
    
    cout << "CPF: ";
    
    //faria um laço nisso? acho q n tem necessidade, perguntar ao prof
    
    cout << "Nome: ";
    cout << "Data de nascimento: ";
    //verificar se é valido
    cout << "Número de autorização: "; //se for 0, n é de menor
    cin >> num;
    
}
