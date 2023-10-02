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

    // e. atribuir e imprimir na tela a expressão
    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado da expressão 4 * (a + b) / (3 - 5) é: " << c << endl;

    // f. comentar o porquê da diferença de resultados; demonstrar outra variação disso
    /* A ordem das operações na programação tem como referência os princípios da Matemática, portanto é dada prioridade às operações de 
    multiplicação em detrimento de adição e subtração. No entanto, usando-se os parênteses, é possível mudar a ordem de prioridade.*/

    int resultado1 = 4 * ((a + b) / 3) - 5;
    int resultado2 = 4 * (a + b / 3) - 5;

    cout << "Resultado da expressão 4 * ((a + b) / 3) - 5 é: " << resultado1 << endl;
    cout << "Resultado da expressão 4 * (a + b / 3) - 5 é: " << resultado2 << endl;

    //g. recalcular valor de g através de outra expressão; imprimir na tela
    c = a * a + 2 * b + c;
    cout << "Resultado da expressão a² + 2 * b + c é: " << c << endl;


    return 0;
}

