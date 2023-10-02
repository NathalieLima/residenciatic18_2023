/* Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
palíndromo. Um número é palíndromo se ele permanece o mesmo quando seus
dígitos são invertidos. */

#include <iostream>
#include <algorithm> // bits/stdc++.h
#include <string>

using namespace std;

int main()
{
    string str = "";
    int number = 0;
    int reversed_number = 0;

    // entrada de dados
    cout << "Digite um numero inteiro: ";
    cin >> number;

    // converter entrada para string
    str = to_string(number);

    // uso da função reverse()
    reverse(str.begin(), str.end());

    // converter string revertida para inteiro
    reversed_number = stoi(str);
    
    cout << number << (number != reversed_number ? " não é" : " é") << " um número palíndromo." << endl;

 
    return 0;
}
