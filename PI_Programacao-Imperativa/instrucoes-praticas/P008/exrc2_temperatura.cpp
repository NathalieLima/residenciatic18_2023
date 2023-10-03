#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>

#define TAMANHO_ARRAY 250

using namespace std;

int main (void) 
{
    srand(time(0));

    double temperaturas[TAMANHO_ARRAY] = {};
    double temperatura_minina = 500.0;
    double temperatura_maxima = 0.0;
    double temperatura_media = 0.0;

    // a. armazenar num array as temperaturas reportadas
    for (int i = 0; i < TAMANHO_ARRAY; i++) 
    {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 100.0; // gerar valores entre 10 e 40

        // b. determinar temperaturas máxima e mínima
        if (temperaturas[i] < temperatura_minina) {
            temperatura_minina = temperaturas[i];
        }

        if (temperaturas[i] > temperatura_maxima) {
            temperatura_maxima = temperaturas[i];
        }

        // armazenando soma das temperaturas
        temperatura_media += temperaturas[i];
    }

    // c. determinar temperatura média
    temperatura_media /= TAMANHO_ARRAY;

    cout << "Temperatura mínima de: " << temperatura_minina;
    cout << "\nTemperatura máxima de: " << temperatura_maxima;
    cout << "\nTemperatura média de: " << temperatura_media;

    // d. atualizar array de acordo com a previsão do modelo: +1 para acima da média, -2 para abaixo
    for (int i = 0; i < TAMANHO_ARRAY; i++) 
    {
        if (temperaturas[i] > temperatura_media) {
            temperaturas[i] += 1;
        } 
        else if (temperaturas[i] < temperatura_media) {
            temperaturas[i] -= 2;
        }
    }
    
    
    return 0;
}