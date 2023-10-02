#include <iostream>

using namespace std;

int main (void) 
{
    // a. declarar 3 variáveis do tipo double
    double x, y, z;

    // b. digitar 2 números
    cout << "Digite o primeiro número: ";
    scanf("%lf", &x);
    cout << "Digite o segundo número: ";
    scanf("%lf", &y);
    cout << endl;

    // c. atribuir à variável z a somas das variáveis a e b; imprimir o resultado
    z = x + y;
    cout << "Soma entre os valores: " << z << endl;

    // d. atribuir à variável z a média das variáveis x e y; imprimir o resultado
    z = (x + y) / 2;
    cout << "Média entre os valores: " << z << endl;

    // e. atribuir à variável z o produto entre as variáveis x e y; imprimir o resultado
    z = x * y;
    cout << "Produto entre os valores: " << z << endl;
    
    // f. atribuir à variável z o maior valor entre as variáveis x e y; imprimir o resultado
    z = (x > y ? x : y);
    cout << "Maior valor entre ambos: " << z << endl;

    // g. atribuir à variável z o menor valor entre as variáveis x e y; imprimir o resultado
    z = (x < y ? x : y);
    cout << "Menor valor entre ambos: " << z << endl;


    return 0;
}