#include <iostream>

using namespace std;

int main(void) 
{
    float number1;
    float number2;
    
    cout << "A = ";
    cin >> number1;
    cout << "B = ";
    cin >> number2;
    
    cout << endl << "Soma = " << (number1 + number2) << endl
    << "Subtração = " << (number1 - number2) << endl
    << "Multiplicação = " << (number1 * number2) << endl
    << "Divisão = " << (number1 / number2) << endl;


    return 0;
}