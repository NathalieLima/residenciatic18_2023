/* Escreva um programa em C++ que leia um número inteiro e verifique se ele
é um número armstrong. Um número armstrong (ou narcisista) é um número
que é igual à soma de seus próprios dígitos elevados à quantidade de
dígitos. Por exemplo, 153 é um número armstrong porque 1³ + 5³ + 3³ = 153. */

#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int number = 0;

    cout << "Digite um numero inteiro: ";
    cin >> number;

    string str = to_string(number);
    int number_size = str.length();
    int sum = 0;
    
    for ( int i = 0; i < number_size; i++ )
    {
        int digit = str[i] - '0';
        sum += pow(digit, number_size);
    }

    cout << sum << " " << number << endl;
    
    cout << "O número " << number << (number == sum ? " eh" : " nao eh") << " um número armstrong (narcisista).";


    return 0;
}