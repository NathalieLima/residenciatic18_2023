#include <iostream>

using namespace std;

int calcularFatorial(int numero);

int main (void)
{
    
    cout << "O fatorial é: " << calcularFatorial(10) << endl;
}

int calcularFatorial(int numero)
{
    int fatorial = 1;

    for (int i = numero; i != 0; i--)
    {
        fatorial *= i;
    }

    return fatorial;
}

