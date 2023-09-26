#include <iostream>

using namespace std;

int main(void) 
{
    int number1;
    int number2;
    
    cout << "A = ";
    cin >> number1;
    cout << "B = ";
    cin >> number2;
    
    cout << endl << "Soma = " << (number1 + number2) << endl
    << "Subtração = " << (number1 - number2) << endl
    << "Multiplicação = " << (number1 * number2) << endl
    << "Divisão = " << (number1 / number2) << endl
    << "Resto = " << (number1 % number2) << endl;


    return 0;
}