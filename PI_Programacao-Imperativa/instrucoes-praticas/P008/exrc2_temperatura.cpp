#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

int main (void) 
{
    srand(time(0));
    float temperaturas[250] = {};

    float temperatura_minina = 500;
    float temperatura_maxima = 0;
    float temperatura_media = 0.0;

    // a. armazenar num array as temperaturas

    for (int i = 0; i < 250; i++) {
        temperaturas[i] = 1 + 30.0*(rand()%100)/3000.0;
        cout << "temp: " << temperaturas[i] << endl;

        if (temperaturas[i] < temperatura_minina) {
            temperatura_minina = temperaturas[i];
        }
        if (temperaturas[i] > temperatura_maxima) {
            temperatura_maxima = temperaturas[i];
        }

        temperatura_media += temperaturas[i];
    }

    temperatura_media /= 250;

    cout << endl;

    cout << "Temperatura mínima de: " << temperatura_minina << endl;
    cout << "Temperatura máxima de: " << temperatura_maxima << endl;
    cout << "Temperatura média de: " << temperatura_media << endl;

    //b. temperaturas

    for (int i = 0; i < 250; i++) {
        if (temperaturas[i] > temperatura_media) {
            temperaturas[i] += 1;
        } 
        else if (temperaturas[i] < temperatura_media) {
            temperaturas[i] -= 2;
        }
    }
    
    
    return 0;
}