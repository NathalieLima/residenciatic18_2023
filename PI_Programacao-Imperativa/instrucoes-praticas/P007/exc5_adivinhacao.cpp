/* Escreva um programa em C++ que simule um jogo de adivinhação. O
programa deve gerar um número aleatório entre 1 e 100, e o usuário deve
tentar adivinhar esse número. O jogo deve informar se o palpite está alto,
baixo ou correto, e continuar até que o usuário acerte o número. */

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int main (void) 
{
    srand(time(0));

    int number = rand() % 100;
    int user_number = 0;

    do {
        cout << "Qual é o seu número? ";
        cin >> user_number;

        if (user_number < number)
        {
            cout << "Palpite está baixo!" << endl;
        }
        else if (user_number > number)
        {
            cout << "Palpite está alto!" << endl;
        }
    } 
    while (user_number != number);

    cout << "\nParabéns, você acertou!";


    return 0;
}