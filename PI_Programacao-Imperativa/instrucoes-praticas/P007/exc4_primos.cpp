/* Escreva um programa em C++ que imprima todos os números primos de 1 a 100. */

#include <iostream>

using namespace std;

int main (void) 
{
    int numero = 2;

    while ( numero < 100 ) 
    {
        bool primo = true;
        
        for (int i = 2; i < 100 && primo; i++) 
        {
            if (numero % i == 0 && numero != i ) {
                primo = false;
            }
        }
        
        if (primo) {
            cout << numero << " ";
        }
        
        numero++;
    }


    return 0;
}