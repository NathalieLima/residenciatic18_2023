#include <iostream>
#include <cstdlib>
#include <ctime>

#define ALTURA 480
#define LARGURA 640
#define INTENSIDADE_MAXIMA 256

using namespace std;

int main (void) 
{
    srand(time(0));

    // a. simular captura de imagem de 640x480 pixels
    int imagem[ALTURA][LARGURA];
    
    for (int i = 0; i < ALTURA; i++)
    {
        for (int j = 0; j < LARGURA; j++) {
            imagem[i][j] = rand() % 256;
        }
    }

    // b. calcular histograma da imagem 
    int histograma[INTENSIDADE_MAXIMA] = {0};

    for (int y = 0; y < ALTURA; y++) 
    {
        for (int x = 0; x < LARGURA; x++) 
{
            int intensidade = imagem[y][x];

            histograma[intensidade]++;
        }
    }

    for (int i = 0; i < INTENSIDADE_MAXIMA; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }


    return 0;
}