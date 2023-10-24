/* Crie uma classe Estado com os atributos nome, sigla (UF) e uma coleção de
objetos do tipo Cidade.
● Crie uma classe Cidade que tenha os atributos
● Crie um programa em C para criar uma coleção (vector) de Estados (lido do
usuário).
● Crie um programa em C para, percorrendo cda um dos estados, criar uma
coleção (vector) de Cidades (lido do usuário)
○ Lembre que cada cidade deve pertencer a um Estado */

/* Crie uma classe Estado com os atributos nome e sigla (UF).
● Crie uma classe Cidade que tenha os atributos nome e estado (ponteiro para
objeto do tipo Estado)
● Crie um programa em C para criar uma coleção (vector) de Estados (lido do
usuário).
● Crie um programa em C para criar uma coleção (vector) de Cidades (lido do
usuário)
○ Lembre que cada cidade deve pertencer a um Estado */

#include <iostream>
#include <string>
#include <vector>

class Cidade
{
    private:
        std::string nome, 
                    *estado;
};

class Estado
{
    private:
        std::string nome,
                    sigla;


};

int main (void) 
{


    return 0;
}