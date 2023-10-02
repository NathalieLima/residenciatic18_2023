/* Escreva um programa em C++ que imprima na tela os números de 1 a 100. Porém,
para múltiplos de 3, o programa deve imprimir "Fizz", e para múltiplos de 5, deve
imprimir "Buzz". Para números que são múltiplos de ambos, imprimir "FizzBuzz". */

#include <iostream>

using namespace std;

int main (void) 
{
    for (int i = 1; i <= 100; i++)
    {
        string message = "";

        if (i % 3 == 0 && i % 5 == 0)
        {
            message = " | FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            message = " | Fizz";
        }
        else if (i % 5 == 0)
        {
            message = " | Buzz";
        }

        cout << i << message << endl;
    }

    return 0;
}