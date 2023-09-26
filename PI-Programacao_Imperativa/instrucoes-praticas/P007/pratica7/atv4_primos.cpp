#include <iostream>

using namespace std;

int main (void) 
{
    int number = 0;

    cout << "Digite um número inteiro: ";
    cin >> number;

    cout << "Os divisores de " << number << " são: ";

    for (int i = 1; i <= 100; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}