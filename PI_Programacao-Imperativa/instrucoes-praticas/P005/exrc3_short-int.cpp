#include <iostream>
#include <limits>

using namespace std;

int main (void) 
{
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << endl << numero << (numero > numeric_limits<short int>::max() ? " é maior que um short int." : " - este valor pertence ao intervalo dos short int.");


    return 0;
}