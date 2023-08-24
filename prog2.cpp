// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main(void) {
    int number1;
    int number2;
    
    cout << "A = ";
    cin >> number1;
    cout << "B = ";
    cin >> number2;
    
    cout << "Soma: " << number1 + number2 << endl;
    cout << "Subtração: " << number1 - number2 << endl;
    cout << "Multiplicação: " << number1 * number2 << endl;
    cout << "Divisão: " << number1 / number2 << endl;
    cout << "Resto: " << number1 % number2 << endl;

    return 0;
}
