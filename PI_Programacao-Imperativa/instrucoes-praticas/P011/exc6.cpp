#include <iostream>

using namespace std;

void intercala(int *vet1, int tam1, int *vet2, int tam2, int *vet3);

int main (void) 
{
    int vetor1[] = {0,2,4,6,8};
    int vetor2[] = {1,3,5,7,9};
    int tamanho1 = sizeof vetor1 / sizeof vetor1[0];
    int tamanho2 = sizeof vetor2 / sizeof vetor2[0];
    int tamanho_resultado = tamanho1 + tamanho2;
    int resultado[tamanho_resultado] = {};

    intercala(vetor1, tamanho1, vetor2, tamanho2, resultado);

    cout << "Resultado do vetor intercalado: ";
    for (int i = 0; i < tamanho_resultado; i++)
    {
        cout << resultado[i] << " ";
    }
    

    return 0;
}

void intercala(int *vet1, int tam1, int *vet2, int tam2, int *vet3)
{
    int novo_tamanho = tam1 + tam2;
    int k = 0, j = 0;

    for (int i = 0; i < novo_tamanho; i++)
    {
        if (i % 2 == 0) {
            vet3[i] = vet1[j];
            j++;
        }
        else {
            vet3[i] = vet2[k];
            k++;
        }
    }
}