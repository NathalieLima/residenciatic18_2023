// usar numero aleatorio pra gerar valores

#include <iostream>
#include <string>
#include <vector>
#define PRECO 80.00;

using namespace std;

//structs

struct Passagem {
    int data;
    int hora;
    string CPF;
    string nome;
    int idade;
    int num_assento;
};

struct Viagem {
    int id_viagem;
    int date;
    string origem;
    string destino;
    vector<Passagem> passagem;
};

//protótipos

double calcularTotalViagemArrecadado (Viagem);

int main () 
{
    vector<Passagem> passagens;

    for (int i = 1; i <= 40; i++)
    {
        Passagem nova_passagem = {1509, 1008, "07079023556", "NPC" + to_string(i), 19+i, i};
        passagens.push_back(nova_passagem);
    }

    Viagem rio_sp = {1, 151203, "RJ", "SP", passagens};

    cout << calcularTotalViagemArrecadado(rio_sp) << endl;
}

double calcularTotalViagemArrecadado (Viagem viagem) 
{
    vector<Passagem> passagens = viagem.passagem;

    int i = 0;

    for (Passagem x: passagens)
    {
        if (x.num_assento != 0)
        {
            i++;
        }
    }

    return i * PRECO;
}
/*
double calcularTotalMensalArrecadado (Viagem viagem_realizada) 
{
    
}

string pegarNomePassageiro(int num_assento, int viagem)
{

}

int calcularHorarioViagemMaisRentavel() 
{

}

float calcularMediaIdade()
{

}*/