#include <iostream>
#include <vector>
#include <string>

using namespace std;




// escrever validacao nome (campo vazio), se é numero e a data certinha


/* PROTÓTIPOS DAS FUNÇÕES */



// FUNÇÃO PRINCIPAL

/* FUNÇÕES */



void exibirMenuOpcoesPassageiro(void) 
{
    cout << "\nMENU DE OPÇÕES - Digite um número" << endl <<
    LINHA << endl <<
    "1. Incluir;" << endl <<
    "2. Excluir;" << endl <<
    "3. Alterar (apenas por CPF);" << endl <<
    "4. Listar;" << endl <<
    "5. Localizar (por CPF);" << endl <<
    "0. Sair." << endl << endl <<
    "Número: ";
}

void inserirPassageiro(vector<Passageiro> &passageiros) // é mesmo Passageiro ou n void?
{
    cout << "OPÇÃO - INSERIR PASSAGEIRO" << endl
    << LINHA << endl;

    Passageiro pessoa;
    Data data;

    cout << "CPF: ";
    cin >> pessoa.cpf;
    if( !validarCPF(pessoa.cpf) ) {
        cout << "Aviso: CPF inválido.";
    };

    cout << "Nome: ";
    cin >> pessoa.nome;

    cout << "Data de nascimento:" <<
    "Dia - "; //se menor de idade, pedir num autorizacao
    cin >> data.dia;
    cout << "Mês - ";
    cin >> data.mes;
    cout << "Ano - ";
    cin >> data.ano;

    pessoa.data_nascimento = transformarDataParaString(data);
    //verificar se é valido
    cout << "Número de autorização: "; //se for 0, n é de menor
    cin >> pessoa.num_autorizacao;

    passageiros.push_back(pessoa);
}

int excluirPassageiro(vector<Passageiro> &passageiros) 
{
    cout << "OPÇÃO - EXCLUIR PASSAGEIRO" << endl
    << LINHA << endl;

    string cpf;

    do {
       cpf = pedirCPF("excluído"); 
    } while ( !validarCPF(cpf) );


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
    vector<Passageiro>::iterator it;
    it = passageiros.begin();
    advance(it, passageiros[indice_passageiro]);

    cout << 
    "CPF: " << passageiro.cpf << endl <<
    "Nome: " << passageiro.nome << endl <<
    "Data de nascimento: " << passageiro.data_nascimento  << endl <<
    "Número de autorização: " << passageiro.num_autorizacao << endl <<
    LINHA << endl;

    string flag;
    bool maior_de_idade = true;

    cout << "Deseja alterar o CPF (s/n)? ";
    cin >> flag;

    if (flag == "s")
    {
        cout << "CPF: ";
        cin >> passageiros[indice_passageiro].cpf;
    }

    cout << "Deseja alterar o nome (s/n)? ";
    cin >> flag;

    if (flag == "s")
    {
        cout << "Nome: ";
        cin >> passageiros[indice_passageiro].nome;
    }

    cout << "Deseja alterar a data de nascimento (s/n)? ";
    cin >> flag;

    if (flag == "s")
    {
        Data data_nascimento;

        cout << "Dia - ";
        cin >> data_nascimento.dia;
        cout << "Mês - ";
        cin >> data_nascimento.mes;
        cout << "Ano - ";
        cin >> data_nascimento.ano;

        if (!validarData(data_nascimento))
        {
            cout << "Aviso: Data inválida. Tente novamente.";
        }
        else {
            passageiros[indice_passageiro].data_nascimento = transformarDataParaString(data_nascimento);
            maior_de_idade = verificarMaioridade(data_nascimento);
        }
    }

    if (!maior_de_idade) 
    {
        cout << "Deseja alterar o número de autorização (s/n)? ";
        cin >> flag;

        if (flag == "s")
        {
            cout << "Número de autorização: ";
            cin >> passageiros[indice_passageiro].num_autorizacao;
        }
    }
}

void listarPassageiros(vector<Passageiro> &passageiros) 
{
    cout << "OPÇÃO - LISTAR PASSAGEIROS REGISTRADOS" << endl <<
    LINHA << endl;

    int i = 0;

    if (passageiros.size() == 0)
    {
        cout << "Não há nenhum passageiro registrado." << endl;
    }
    else 
    {
        for (Passageiro passageiro: passageiros)
        {
            i++;
            
            cout << "Passageiro " << i << endl <<
            "CPF: " << passageiro.cpf << endl <<
            "Nome: " << passageiro.nome << endl <<
            "Data de nascimento: " << passageiro.data_nascimento  << endl <<
            "Número de autorização: " << passageiro.num_autorizacao << endl <<
            LINHA << endl;
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

// colocar esse no inicio

int executarModuloPassageiros (void) 
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
                cout << "Aviso: Fim do programa!";
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
            {
                alterarPassageiro(passageiros);
                break;
                
            }
            case 4:
            {
                listarPassageiros(passageiros);
                break;
            }
                
            case 5:
                if (localizarPassageiro(passageiros))
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
