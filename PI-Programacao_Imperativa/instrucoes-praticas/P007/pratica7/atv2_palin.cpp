#include <iostream>
#include <algorithm> //bits/stdc++.h
#include <string>

using namespace std;

int main()
{
    string str = "\0";
    int number = 0;
    int number_revert = 0;

    // entrada de dados
    cout << "Digite um número inteiro: ";
    cin >> number;

    // converter entrada para string
    str = to_string(number);

    // uso da função reverse()
    reverse(str.begin(), str.end());

    // converter string revertida para inteiro
    number_revert = stoi(str);
    
    cout << number << (number != number_revert ? " não é" : " é") << " um número palíndromo." << endl;

 
    return 0;
}