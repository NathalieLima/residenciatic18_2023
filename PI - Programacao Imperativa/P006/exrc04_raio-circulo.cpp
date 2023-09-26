#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (void) 
{
    float raio;

    do {
        cout << "Digite o raio de um círculo: ";
        cin >> raio;
    } while (raio <= 0);

    cout << "Seu diâmetro: " << raio * 2 << endl <<
    "O valor de sua circunferência (perímetro): " << raio * 3.14 << endl <<
    "Sua área: " << 3.14 * (raio * raio) << endl;
    

    return 0;
}