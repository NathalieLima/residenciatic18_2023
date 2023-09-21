#include <iostream>
#include <vector>
#include <string>

#define LINHA "--------------------------------"

#include "structs.cpp"
#include "validacoes.cpp"
#include "funcoes_auxiliares.cpp"
#include "modulo_passageiros.cpp"
#include "modulo_roteiros.cpp"



using namespace std;

int main (void) 
{
    // inicializando vetores
    vector<Passageiro> passageiros;
    vector<Roteiro> roteiros;

    executarModuloPassageiros();
    //executarModuloRoteiros();


    return 0;
}
