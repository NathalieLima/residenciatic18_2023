/*
Escreva um programa em C++ que gere e imprima o seguinte padrão de
caracteres alfanuméricos, onde o número fornecido pelo usuário é a altura
do padrão:
*/

#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Digite um número para a altura do padrão: ";
    cin >> number;

    int division = 26 / number;
    cout << division << endl;

    char a = 'A';

    for (int i = 'A'; i <= 'Z'; i++)
    {
        //cout << char(i) << endl;
    }

    int j = 1;
    int i = 'A';
    

    for (int k = 0; k < number; k++)
    {
        cout << "ola" << endl;
    }

 
    return 0;
}