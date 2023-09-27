/*
Escreva um programa em C++ que leia um número inteiro e imprima a sequência de 
Fibonacci (Referência abaixo) até o número fornecido pelo usuário.
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, i = 0, soma = 0;
    int a = 0, b = 1;
    
    
    cout << "Entre com um numero: ";
    cin >> num;
    
    cout << "A sequência de Fibonacci até " << num << " é:";
    
    while (i < num)
    {
        cout << " " << a;   
        
        soma = a + b;
        
        a = b;
        b = soma;
        i++;
    }
    

    return 0;
}