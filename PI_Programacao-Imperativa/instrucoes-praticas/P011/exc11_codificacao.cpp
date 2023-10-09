#include <iostream>
#include <string>

using namespace std;

string codificarCadeia(string cadeia);
string descodificarCadeia(string cadeia);

int main (void) 
{
    string texto = "Estruturas de Dados";
    cout << texto << endl;

    cout << codificarCadeia(texto) << endl;
    cout << descodificarCadeia(codificarCadeia(texto));


    return 0;
}

string codificarCadeia(string cadeia)
{
    string nova_cadeia;

    for (unsigned int i = 0; i < cadeia.length(); i++) {
        if (cadeia[i] == 'z') {
            nova_cadeia += 'a';
        } 
        else if (cadeia[i] == 'Z') {
            nova_cadeia += 'A';
        } 
        else if (cadeia[i] == ' ') {
            nova_cadeia += ' ';
        }
        else {
            nova_cadeia += char(cadeia[i] + 1);
        }
    }

    return nova_cadeia;
}

string descodificarCadeia(string cadeia)
{
    string nova_cadeia;

    for (unsigned int i = 0; i < cadeia.length(); i++) {
        if (cadeia[i] == 'a') {
            nova_cadeia += 'z';
        } 
        else if (cadeia[i] == 'A') {
            nova_cadeia += 'Z';
        }
        else if (cadeia[i] == ' ') {
            nova_cadeia += ' ';
        }
        else {
            nova_cadeia += char(cadeia[i] - 1);
        }
    }

    return nova_cadeia;
}