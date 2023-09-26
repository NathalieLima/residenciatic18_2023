#include <iostream>

using namespace std;
int main(void) {
    float number1;
    float number2;
    
    cout << "A = ";
    cin >> number1;
    cout << "B = ";
    cin >> number2;
    
    cout << "Soma: " << number1 + number2 << endl;
    cout << "Subtração: " << number1 - number2 << endl;
    cout << "Multiplicação: " << number1 * number2 << endl;
    cout << "Divisão: " << number1 / number2 << endl;

    int oi1 = 12;
    int oi2 = 6;

    cout << ++oi1 - oi2;
    cout << oi1;

    return 0;
}