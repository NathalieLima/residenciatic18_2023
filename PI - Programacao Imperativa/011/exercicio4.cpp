#include <iostream>

using namespace std;

void calcularSoma (int&, int&);

int main (void) 
{
    int num1 = 10;
    int num2 = 2;

    calcularSoma(num1, num2);

    cout << "Resultado da soma (adição e subtração): " << num1 << " e " << num2 << endl;


    return 0;
}

void calcularSoma(int &x, int &y)
{
    int valor_x = x;
    int valor_y = y;

    x = valor_x + valor_y;
    y = valor_x - valor_y;
}