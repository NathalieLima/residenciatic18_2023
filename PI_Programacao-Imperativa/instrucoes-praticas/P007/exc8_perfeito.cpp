/* Escreva um programa em C++ que leia um número inteiro e determine se ele é um
número perfeito. Um número perfeito é aquele cuja soma dos seus divisores,
excluindo ele mesmo, é igual ao próprio número. */

#include <iostream>

using namespace std;

int main (void) 
{
    int number;
    int sum = 0;

    cout << "Digite um número inteiro: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0) { 
            sum += i;
        }
    }

    cout << "O número " << number << (number == sum ? " é" : " não é") << " um número perfeito.";

    return 0;
}