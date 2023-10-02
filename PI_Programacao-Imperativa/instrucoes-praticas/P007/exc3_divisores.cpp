/* Escreva um programa em C++ que leia um número inteiro e imprima todos os divisores
desse número. */

#include <iostream>

using namespace std;

int main (void) 
{
    int number;

    cout << "Digite um número inteiro: ";
    cin >> number;

    cout << endl << "DIVISORES DE " << number << ":" << endl;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0) { 
            cout << i << " "; 
        }
    }

    return 0;
}