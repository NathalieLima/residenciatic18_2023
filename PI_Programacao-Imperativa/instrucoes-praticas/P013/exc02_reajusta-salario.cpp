#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Empregado {
    string nome, 
        sobrenome, 
        rg;
    int ano_nascimento, 
        ano_admissao;
    double salario;
};

void reajusta_dez_porcento(vector<Empregado> &empregados, int qtde);

int main (void) 
{
    srand(time(0));

    vector<Empregado> empregados;
    int qtde = 3 + rand() % 48; // ter no mínimo 3

    // preencher vector
    for (int i = 0; i < qtde; i++) 
    {
        Empregado empregado;
        empregado.nome = "Pessoa " + to_string(i);
        empregado.sobrenome = "Lima " + to_string(i);
        empregado.rg = "12345-" + to_string(i);
        empregado.ano_nascimento = 1970 + i;
        empregado.ano_admissao = 2023;
        empregado.salario = 1350 + rand() % 5000;

        empregados.push_back(empregado);
    }

    cout << "TRÊS PRIMEIROS SALÁRIOS ANTES" << endl;

    // printar os 3 primeiros salários
    for (int i = 0; i < 3; i++) {
        cout << empregados[i].salario << " ";
    }

    // chamada da função
    reajusta_dez_porcento(empregados, qtde);
    
    cout << "\n\nTRÊS PRIMEIROS SALÁRIOS DEPOIS" << endl;

    // printar os 3 primeiros novos salários
    for (int i = 0; i < 3; i++) {
        cout << empregados[i].salario << " ";
    }

    return 0;
}

void reajusta_dez_porcento(vector<Empregado> &empregados, int qtde) 
{
    for (int i = 0; i < qtde; i++) {
        empregados[i].salario *= 1.1;
    }
}