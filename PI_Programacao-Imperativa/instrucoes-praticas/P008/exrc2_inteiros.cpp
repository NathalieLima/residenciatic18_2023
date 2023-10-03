#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

int main () 
{
    int random_numbers[100] = {};
    int repeated_numbers[20] = {};
    int max_number = 0;

    srand(time(0)); 

    // a. preencher array com 100 valores aleatórios entre 1 e 20
    for (int number: random_numbers) 
    {
        number = 1 + rand() % 20;

        // b. utilizar array com 20 posições para determinar quantidade de repetições dos valores
        repeated_numbers[number] += 1;
    }

    // c. determinar qual ou quais os números que mais vezes aparecem no array
    max_number = *max_element(begin(repeated_numbers), end(repeated_numbers));

    cout << "O(s) número(s) que aparece(m) mais vezes é(são): " << endl;

    for (unsigned int i = 1; i < (sizeof repeated_numbers / sizeof repeated_numbers[0]); i++) 
    {
        if (repeated_numbers[i] == max_number) 
        {
            cout << i << " ";
        }
    }

    cout << endl << "com " << max_number << " vezes ao todo.";


    return 0;
}