/*data.valida
data.getdia

funçoes na struct

pegar data e entrar com ela dd/mm/yyyy
poder pegar duas datas e verificar distancia de dynamic_cast
qnt tmp decorreu de uma hora pra outra


retornar string c dia/mes/ano

valores em int


25 de jan de 2003



formato americano*/



#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#define ANO_ATUAL 2023

using namespace std;

//verificar se é bissexto

struct Data 
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        void inicializarData(string);
        int validarData ();
};

void Data::inicializarData(string data) 
{
    string str1;
    int array[3] = {};
    
    stringstream ss(data);
    
    int i = 0;

    while (getline(ss, str1, '/')) {
        array[i] = stoi(str1);
        cout << str1 << endl;
        i++;
    }

    dia = array[0];
    mes = array[1];
    ano = array[2];

    cout << array[0] << array[1] << array[2];


}

int Data::validarData ()
{
    

    // se tem zero
    // se é digito

    // verificar se cada par individualmente é válido

    if ( dia < 1 || dia > 31 ) { return 1; }
    else if ( mes < 1 || mes > 12 ) { return 1; }
    else if ( ano < 1900 || ano > ANO_ATUAL ) { return 1; }

    // verificar se a combinação de pares é válida

    if (  )

}

int main (void)
{
    string s;

    s = "15/12/2003";

    transformarStringParaData(s);

}