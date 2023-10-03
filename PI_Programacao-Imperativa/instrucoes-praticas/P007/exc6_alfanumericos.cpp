/* Escreva um programa em C++ que gere e imprima o seguinte padrão de caracteres alfanuméricos, onde o número fornecido pelo 
usuário é a altura do padrão: */

#include <iostream>

using namespace std;

int main (void) 
{
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    char caractere = 'A'; 

    for (int i = 1; i <= altura; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << caractere;
            caractere++; 
        }

        cout << endl;
    }


    return 0;
}
