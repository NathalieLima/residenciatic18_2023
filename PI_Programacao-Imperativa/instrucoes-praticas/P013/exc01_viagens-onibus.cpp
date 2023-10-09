#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define PRECO_PASSAGEM 80.00

using namespace std;

/* STRUCTS */

struct Data {
    int dia, mes, ano;
};

struct Passagem {
    Data data;
    int hora;
    string cpf;
    string nome;
    int idade;
    int num_assento;
};

struct Viagem {
    int id_viagem;
    Data data;
    int ida_volta;
    vector<Passagem> passagens;
};

/* PROTÓTIPOS */

void exibirOpcoesMenu();
void cadastrarViagem(vector<Viagem> &viagens, int id_viagem, int ida_volta);
void cadastrarPassagem(vector<Viagem> &viagens);
string pegarNomePassageiro(Viagem viagem, int num_assento);
double calcularTotalMensalArrecadado (int mes, vector<Viagem> &viagens_todas);
double calcularTotalViagemArrecadado(Viagem viagem);                                
int calcularHorarioMaisRentavel(vector <Viagem> &viagens);
float calcularMediaIdade(vector <Viagem> viagens);
void separarNumeros(string data_str, Data &data);
int pegarIndicePassageiro(int num_assento, Viagem viagem);
int pegarIndiceViagem(vector<Viagem> viagens, int id_viagem, int ida_volta);
bool isAssentoVago(vector<Passagem> passagens, int num_assento);
bool isCPFValido(string cpf);
bool isDataValida(Data data);

/* FUNÇÃO PRINCIPAL */

int main () 
{
    int opcao_usuario;
    vector<Viagem> viagens;

    do {
        exibirOpcoesMenu();
        
        cout << "Opção: ";
        cin >> opcao_usuario;
        cout << endl;

        switch (opcao_usuario)
        {
            bool flag;
            int ida_volta, id_viagem, indice_viagem, num_assento, mes;

            case 0:
                cout << "Fim do programa. \n";
                break;

            case 1:
                cadastrarPassagem(viagens);
                break;

            case 2:
                do {
                    cout << "Esta é uma viagem de ida (1) ou volta (2)? ";
                    cin >> ida_volta;

                    flag = true;

                    if (ida_volta != 1 && ida_volta != 2) {
                        flag = false;
                        cout << "Aviso: Insira 1 ou 2 como resposta." << endl;
                    } 
                } while (!flag);

                do {
                    cout << "ID da viagem (1-5): ";
                    cin >> id_viagem;
                    indice_viagem = pegarIndiceViagem(viagens, id_viagem, ida_volta);

                    if (id_viagem < 1 || id_viagem > 5) {
                        flag = false;
                        cout << "Aviso: Insira um valor entre 1 e 5." << endl;
                    } else if ( indice_viagem == -1 ) {
                        cout << "Aviso: Esta viagem não foi cadastrada." << endl;
                    }
                } while (!flag);

                cout << "O total arrecadado para esta viagem foi: " << calcularTotalViagemArrecadado(viagens[indice_viagem]) << " reais." << endl;
                break;

            case 3:

                do {
                    cout << "Insira o mês a ser analisado (1-12): ";
                    cin >> mes;

                    flag = true;

                    if ( mes < 1 || mes > 12 ) {
                        cout << "Aviso: Insira um valor entre 1 e 12." << endl;
                    }
                } while (!flag);

                cout << "Total arrecadado no mês " << to_string(mes) << " foi: " << calcularTotalMensalArrecadado(mes, viagens) << " reais." << endl;
                break;

            case 4:

                do {
                    cout << "Esta é uma viagem de ida (1) ou volta (2)? ";
                    cin >> ida_volta;

                    flag = true;

                    if (ida_volta != 1 && ida_volta != 2) {
                        flag = false;

                        cout << "Aviso: Insira 1 ou 2 como resposta." << endl;
                    } 
                } while (!flag);

                do {
                    cout << "ID da viagem (1-5): ";
                    cin >> id_viagem;

                    indice_viagem = pegarIndiceViagem(viagens, id_viagem, ida_volta);

                    if (id_viagem < 1 || id_viagem > 5) {
                        flag = false;

                        cout << "Aviso: Insira um valor entre 1 e 5." << endl;
                    } else if ( indice_viagem == -1 ) {
                        cout << "Aviso: Esta viagem não foi cadastrada." << endl;
                    }
                } while (!flag);

                indice_viagem = pegarIndiceViagem(viagens, id_viagem, ida_volta);

                do {
                    cout << "Número do assento: ";
                    cin >> num_assento;

                    flag = (num_assento >= 1 && num_assento <= 40);

                    if (flag == false) {
                        cout << "Aviso: Insira um número entre 1 e 40." << endl;
                    }
                } while (!flag);

                cout << "O passageiro que está na poltrona " << num_assento << " se chama " << pegarNomePassageiro(viagens[indice_viagem], num_assento) << "." << endl;
                break;

            case 5:
                indice_viagem = calcularHorarioMaisRentavel(viagens);

                cout << "O mais rentavel é o horário " << viagens[indice_viagem].id_viagem << " de " << (viagens[indice_viagem].ida_volta == 1 ? "ida." : "volta.") << endl;
                break;

            case 6:
                cout << "Média de idade dos passageiros é: " << calcularMediaIdade(viagens) << " anos.";
                break;
                
            default:
                cout << endl << "Aviso: Insira um valor entre 1 e 4. \n";
                break;
        }

        cout << endl;
    } while (opcao_usuario != 0);


    return 0;
}

/* DEMAIS FUNÇÕES */

void exibirOpcoesMenu()
{
    cout << "SISTEMA DE GERENCIAMENTO DE VIAGENS \n" <<
    "------------------------------------------- \n" <<
    "1. Cadastrar passagem; \n" << 
    "2. Qual o total arrecadado para uma determinada viagem.; \n" <<
    "3. Qual o total arrecadado em um determinado mês; \n" <<
    "4. Qual o nome do passageiro de uma determinada poltrona P de uma determinada viagem; \n" <<
    "5. Qual o horário de viagem mais rentável; \n" << 
    "6. Qual a média de idade dos passageiros; \n" <<
    "0. Sair do programa. \n" << endl;
}

void cadastrarViagem(vector<Viagem> &viagens, int id_viagem, int ida_volta) 
{
    Viagem nova_viagem;
    string data_str;
    bool flag;

    nova_viagem.id_viagem = id_viagem;
    nova_viagem.ida_volta = ida_volta;

    do {
        cout << "Data da viagem (DD/MM/YYY): ";
        cin >> data_str;

        separarNumeros(data_str, nova_viagem.data);
        flag = isDataValida(nova_viagem.data);
    } while (!flag);

    viagens.push_back(nova_viagem);
}

void cadastrarPassagem(vector<Viagem> &viagens)
{
    Viagem nova_viagem;
    Passagem nova_passagem;
    string data_str;
    bool flag;
    int indice_viagem;
    int ida_volta;

    do {
        cout << "Esta é uma viagem de ida (1) ou volta (2)? ";
        cin >> ida_volta;

        flag = true;

        if (ida_volta != 1 && ida_volta != 2) {
            flag = false;
            cout << "Aviso: Insira 1 ou 2 como resposta." << endl;
        } 
    } while (!flag);

    do {
        cout << "ID da viagem (1-5): ";
        cin >> nova_viagem.id_viagem;

        if (nova_viagem.id_viagem < 1 || nova_viagem.id_viagem > 5) {
            flag = false;
            cout << "Aviso: Insira um valor entre 1 e 5." << endl;
        } 
    } while (!flag);

    indice_viagem = pegarIndiceViagem(viagens, nova_viagem.id_viagem, ida_volta);

    if (indice_viagem == -1) {
        cadastrarViagem(viagens, nova_viagem.id_viagem, ida_volta);
        indice_viagem = pegarIndiceViagem(viagens, nova_viagem.id_viagem, ida_volta);
    }

    do {
        cout << "Data da passagem (DD/MM/YYY): ";
        cin >> data_str;

        separarNumeros(data_str, nova_passagem.data);
        flag = isDataValida(nova_passagem.data);
    } while (!flag);
    
    cout << "Hora: ";
    cin >> nova_passagem.hora;

    do {
        cout << "CPF: ";
        cin >> nova_passagem.cpf;

        flag = isCPFValido(nova_passagem.cpf);

        if ( !flag ) {
            cout << "Aviso: Insira um CPF válido, com 11 caracteres númericos." << endl;
        }
    } while (!flag);

    do {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nova_passagem.nome);

        flag = true;

        if ( nova_passagem.nome.empty() ) {
            cout << "Aviso: Insira algum nome." << endl;
            flag = false;
        }
    } while (!flag);

    cout << "Idade: ";
    cin >> nova_passagem.idade;

    do {
        cout << "Número do assento: ";
        cin >> nova_passagem.num_assento;

        flag = isAssentoVago(viagens[indice_viagem].passagens, nova_passagem.num_assento);

        if (flag == false) {
            cout << "Aviso: Este assento já está ocupado ou não existe, insira outro." << endl;
        }
    } while (!flag);

    viagens[indice_viagem].passagens.push_back(nova_passagem);
}

string pegarNomePassageiro(Viagem viagem, int num_assento) 
{
    string nome;

    for (unsigned int i = 0; i < viagem.passagens.size(); i++) {
        if (viagem.passagens[i].num_assento == num_assento) {
            nome = viagem.passagens[i].nome;
        }
    }

    return nome;
}

double calcularTotalViagemArrecadado(Viagem viagem) 
{
    vector<Passagem> passagens = viagem.passagens;
    int i = 0;

    for (Passagem x: passagens)
    {
        if (x.num_assento != 0) {
            i++;
        }
    }

    return i * PRECO_PASSAGEM;
}

double calcularTotalMensalArrecadado (int mes, vector<Viagem> &viagens_todas) 
{
    vector<Viagem> viagens_mes;
    double total_mensal_arrecadado = 0;

    for (unsigned int i = 0; i < viagens_todas.size(); i++) 
    {
        if (viagens_todas[i].data.mes == mes) {
            total_mensal_arrecadado += (viagens_todas[i].passagens.size() * PRECO_PASSAGEM);
        }
    }

    return total_mensal_arrecadado;
}

int calcularHorarioMaisRentavel(vector <Viagem> &viagens) 
{
    float valor = 0;
    int posicao = 0;

    for (unsigned int i = 0; i < viagens.size(); i++)
    {
        double valor_viagem = calcularTotalViagemArrecadado(viagens[i]);
        if ( valor_viagem > valor ) {
            valor = valor_viagem;
            posicao = i;
        }
    }

    return posicao;
}

float calcularMediaIdade(vector <Viagem> viagens)
{
    int qtde_viagens = viagens.size();
    float soma = 0;
    int qtde_passageiros = 0;

    for (int i = 0; i < qtde_viagens; i++) {
        for (Passagem passagem: viagens[i].passagens) {
            soma += passagem.idade;
            qtde_passageiros++;
        }
        
    }

    return soma / qtde_passageiros;
}

int pegarIndicePassageiro(int num_assento, Viagem viagem)
{
    int indice = -1;

    for (unsigned int i = 0; i < viagem.passagens.size(); i++)
    {
        if ( viagem.passagens[1].num_assento == num_assento ) {
            indice = i;
        }
    }

    return indice;    
}

int pegarIndiceViagem(vector<Viagem> viagens, int id_viagem, int ida_volta)
{
    int indice = -1;

    for (unsigned int i = 0; i < viagens.size(); i++) {
        if (viagens[i].id_viagem == id_viagem && viagens[i].ida_volta == ida_volta) {
            indice = i;

            return indice;
        }
    }

    return indice;
}

void separarNumeros(string data_str, Data &data)
{
    istringstream iss(data_str);
    string numeros_data[3] = {};
    string substring;
    int i = 0;
    
    while (getline(iss, substring, '/')) {
        numeros_data[i] = substring;
        i++;
    }

    data.dia = stoi(numeros_data[0]);
    data.mes = stoi(numeros_data[1]);
    data.ano = stoi(numeros_data[2]);
} 
    
bool isAssentoVago(vector<Passagem> passagens, int num_assento) 
{
    if (num_assento < 1 || num_assento > 40) {
        return false;
    }

    for (unsigned int i = 0; i < passagens.size(); i++) {
        if (passagens[i].num_assento == num_assento) {
            return false;
        }
    }

    return true;
}

bool isCPFValido(string cpf) 
{
    int tamanho_string = cpf.length();

    if (tamanho_string != 11) {
        return false;
    }

    for (int i = 0; i < tamanho_string; i++) {
        if ( !isdigit(cpf[i]) ) {
            return false;
        }
    }
    
    return true;
}

bool isDataValida(Data data)
{   
    int dia = data.dia, mes = data.mes, ano = data.ano;

    if (ano >= 0 && mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return dia >= 1 && dia <= 31;
            case 4: case 6: case 9: case 11:
                return dia >= 1 && dia <= 30;
            case 2:
                bool is_bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        
                if (is_bissexto) {
                    return dia >= 1 && dia <= 29;
                } else {
                    return dia >= 1 && dia <= 28;
                }
        }
    }

    return false;
}