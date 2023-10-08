#include <iostream>
#include <numeric>
#include <climits>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main (void) 
{
    int tamanho = 5;
    int meu_array[tamanho] = {8, 47, 10, 55, 3};
    int valor_maximo = 0;
    int valor_minino = 0;

    cout << "Antes: " << valor_maximo << " " << valor_minino << endl;

    maxmin(meu_array, tamanho, valor_maximo, valor_minino);

    cout << "Depois: " << valor_maximo << " " << valor_minino;


    return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo) 
{
    int min = INT_MAX;
    int max = INT_MIN;

    for ( int i = 0; i < n; i++ )
    {
        if (vetor[i] < min) { min = vetor[i]; }
        if (vetor[i] > max) { max = vetor[i]; }
    }

    minimo = min;
    maximo = max;
}