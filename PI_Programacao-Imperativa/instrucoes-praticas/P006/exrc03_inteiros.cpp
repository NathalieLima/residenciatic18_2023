#include <iostream>

using namespace std;

int main (void) 
{
    // a. obter 2 números inteiros
    int numero1 = 0;
    int numero2 = 0;

    cout << "Entre com um número: ";
    cin >> numero1;
    cout << "Entre com outro número: ";
    cin >> numero2;

    // b. identificar o maior ou se ambos são iguais; imprimir na tela
    int maior_numero = (numero1 > numero2 ? numero1 : numero2);

    cout << (numero1 != numero2 ? (to_string(maior_numero) + " é maior.") : "Estes números são iguais." ) << endl;

    // c. identificar se maior valor é par ou ímpar
    cout << "O maior valor é um número " << (maior_numero % 2 == 0 ? "par." : "ímpar.");

    return 0;
}