#include <iostream>
#include <vector>
#include <string>

using namespace std;


string pedirCPF(string acao)
{
    string cpf = "";

    cout << "Informe o CPF do passageiro a ser " << acao << ": ";
    cin >> cpf;

    return cpf;
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
