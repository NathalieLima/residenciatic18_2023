#include <iostream>

using namespace std;

void calcularSoma (int&, int&);

int main (void) 
{
    int num1 = 10;
    int num2 = 2;

    cout << "Números: " << num1 << " e " << num2 << "\n";

    calcularSoma(num1, num2);
  
    cout << "Resultados de adição e subtração: " << num1 << " e " << num2 << endl;


    return 0;
}

// a. receber como parâmetro 2 variáveis inteiras
void calcularSoma(int &x, int &y)
{
    int valor_x = x;
    int valor_y = y;

    // b. retornar em X a soma de X e Y
    x = valor_x + valor_y;

    // c. retornar em Y a subtração de X e Y
    y = valor_x - valor_y;
}