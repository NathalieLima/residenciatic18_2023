#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (void) 
{
    int a, b, c;

    cout << "Valor de a: ";
    cin >> a;
    cout << "\nValor de b: ";
    cin >> b;
    cout << "\nValor de c: ";
    cin >> c;

    int determinante = (b * b) - (4 * a * c);

    if (determinante > 0 || determinante == 0)
    {
        
    }
    else {
        cout << "Este polinômio não possui raiz real.";
    }


    return 0;
}