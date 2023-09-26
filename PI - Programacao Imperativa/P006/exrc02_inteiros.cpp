/*
● Escreva um programa que:
a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
entrada padrão, usando cin, e imprima o maior deles seguido das
palavras “e maior”.
b. Se os números foram iguais, imprima a mensagem “estes
números são iguais”. Use apenas o operador condicional (?).
c. Identifique se o maior valor é um número par ou ímpar.
*/

#include <iostream>

using namespace std;

int main (void) 
{
    int numero1 = 0;
    int numero2 = 0;

    cout << "Entre com um número: ";
    cin >> numero1;

    cout << "Entre com outro número: ";
    cin >> numero2;

    int maior_numero = numero1 > numero2 ? numero1 : numero2;

    cout << (numero1 > numero2 || numero1 < numero2 ?  " é maior" : "Estes números são iguais.");


    return 0;
}