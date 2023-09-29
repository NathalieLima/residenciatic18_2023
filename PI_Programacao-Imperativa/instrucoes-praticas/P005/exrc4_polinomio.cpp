#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int a, b, c;

    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;
    cout << "Valor de c: ";
    cin >> c;
    cout << endl;

    int determinante = (b * b) - (4 * a * c);

    if (determinante > 0 )
    {
        // i. quantidade de raízes
        cout << "Possui duas raízes." << endl;
        
        // ii. havendo, calcular raízes
        int x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
        int x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
        cout << "Valores da raízes: " << x1 << " e " << x2 << ".";
    } 
    else if (determinante == 0) 
    {
        // i. quantidade de raizes
        cout << "Possui apenas uma raiz." << endl;
        
        // ii. havendo, calcular raízes
        int x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
        cout << "Valor da raiz: " << x1 << ".";
    }
    else {
        // i. caso não haja raiz
        cout << "Este polinômio não possui raiz real.";
    }


    return 0;
}