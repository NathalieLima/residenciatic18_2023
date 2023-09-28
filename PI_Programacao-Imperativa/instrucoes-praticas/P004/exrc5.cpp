#include <iostream>

using namespace std;

int main (void) 
{
    /* O que ocorre é uma conversão implícita. Por conta disso, todos os números superiores a 
    0 são convertidos automaticamente em true, que vale 1, já todos os equivalentes a 0 são convertidos em false,
    que vale 0. */

    // caractere
    char valor_char = 'A'; // número 65

    // inteiros
    int valor_int = 12;
    short int valor_short = 0;
    signed int valor_si = -1257;
    unsigned int valor_ui = 0;
    long long int valor_long = 3451234;
    
    // pontos flutuantes
    float valor_double = 3.14;
    double valor_float = 350.576;
    long double valor_ld = 3500457.32;

    bool valor_booleano;

    valor_booleano = valor_char;
    cout << "Valor de char convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_short;
    cout << "Valor de short int convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_long;
    cout << "Valor de long long convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_si;
    cout << "Valor de signed int convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_ui;
    cout << "Valor de unsigned int convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_int;
    cout << "Valor de int convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_double;
    cout << "Valor de double convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_float;
    cout << "Valor de float convertido em bool: " << valor_booleano << endl;

    valor_booleano = valor_ld;
    cout << "Valor de long double convertido em bool: " << valor_booleano << endl;
    
    
    return 0;
}