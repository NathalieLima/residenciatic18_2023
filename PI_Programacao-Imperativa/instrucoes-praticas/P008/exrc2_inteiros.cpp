/*
A seguinte expressão em C++ gera um valor inteiro aleatório entre 1 e 20: 1
+ rand()%20. Utilizando esta expressão desenvolva uma aplicação que:
a. Preencha um array com 100 elementos de tipo int, com valores
aleatoriamente gerados entre 1 e 20;
b. Utilize um array de 20 posições para determinar quantas vezes se
repete cada um dos possíveis valores gerados no array;
c. Determine qual ou quais os números que mais vezes aparecem no
array;
*/

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

    for (int number: random_numbers) 
    {
        number = 1 + rand() % 20;
        repeated_numbers[number] += 1;
    }

    max_number = *max_element(begin(repeated_numbers), end(repeated_numbers));

    cout << "O(s) número(s) que aparece(m) mais vezes é(são): " << endl;

    for (unsigned int i = 1; i < (sizeof repeated_numbers / sizeof repeated_numbers[0]); i++) 
    {
        if (repeated_numbers[i] == max_number) 
        {
            //cout << "O número " << i << " é repetido " << repeated_numbers[i] << " vezes.";
            cout << i << " ";
        }
    }

    cout << endl << "com " << max_number << " vezes ao todo.";


    return 0;
}