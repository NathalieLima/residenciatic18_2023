#include <iostream>

using namespace std;

int main (void) 
{
    // a. declaração de variáveis
    int a, b, c;

    // b. pedir ao usuário 2 números inteiros e atribuir às variáveis
    cout << "Digite um número inteiro: ";
    cin >> a;
    cout << "Digite outro número inteiro: ";
    cin >> b;

    // c. atribuir a expressão
    c = 4 * a + b / 3 - 5;

    // d. imprimir resultado na tela
    cout << "Resultado da expressão 4 * a + b / 3 - 5 é: " << c << endl;

    // e. atribuir e imprimir na tela
    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado da expressão 4 * (a + b) / (3 - 5) é: " << c << endl;

    // f. comentar e 

    // fzr +
    c = a * a + 2 * b + c;
    cout << "Resultado da expressão a² + 2 * b + c é: " << c << endl;


    return 0;
}

