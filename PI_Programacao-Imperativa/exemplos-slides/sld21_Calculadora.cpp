#include <iostream>
#include <string>

using namespace std;

class Calculadora
{
    public:
        static double num1;
        static double num2;   

        Calculadora() {
        }
        
        static double adicao(double valor1, double valor2)
        {
            double soma = valor1 + valor2;
            cout << soma;
            return soma;
        };

};



int main (void) 
{
    double num1, num2;

    cout << "Insira dois números: ";
    cin >> num1 >> num2;
    cout << "Insira uma operação: ";


    cout << Calculadora::adicao(num1, num2);

    return 0;
}