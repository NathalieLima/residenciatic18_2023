#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    float raio;

    // ler raio
    do {
        cout << "Digite o raio de um círculo: ";
        cin >> raio;

        if (raio <= 0) {
            cout << "Não existe raio negativo ou nulo de um círculo. Favor mudar o valor." << endl;
        }
    } while (raio <= 0);

    // a, b, c. imprimir diâmetro, perímetro e ârea
    cout << "Seu diâmetro: " << (raio * 2) << endl << 
    "O valor de sua circunferência (perímetro): " << (2 * raio * M_PI) << endl <<
    "Sua área: " << (M_PI * pow(raio, 2.0)) << endl;
    

    return 0;
}