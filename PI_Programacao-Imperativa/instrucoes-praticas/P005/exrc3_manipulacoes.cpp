#include <iostream>

using namespace std;

int main (void) 
{
    // a. declaração de variáveis
    int a, b, c;

    // b. pedir 2 números inteiros; atribuir para a e b
    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    // c. atribuir à variável c a soma entre a e b; imprimir em formato hex
    c = a + b;
    cout << "Soma dos valores em formato hexadecimal: " << hex << c << endl;

    // d. atribuir à variável c o produto entre a e b; imprimir em formato octal
    c = a * b;
    cout << "Produto dos valores em formato octal: " << oct << c << endl;

    // e. atribuir o módulo
    c = (a - b);
    cout << "Módulo da diferença entre os valores: " << (c < 0 ? -c : c) << endl;

    // f. verificar se existe
    /* Existe. O nome da função é "abs", e basta passar o valor como parâmetro para que seja retornado o seu módulo. 
    Exemplo de uso: cout << abs(c); */

    // g. atribuir quociente de a e b; imprimir resultado; tratar se b = 0

    if (b == 0) {
        cout << "Não é possível divisão por zero.";
    } else {
        c = a / b;
        cout << "Resultado da divisão: " << c << ". Portanto, " << (a % b == 0 ? "é divísivel" : "não é divisível") << " de forma exata.";
    }


    return 0;
}