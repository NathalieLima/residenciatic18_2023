#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2);

int main (void) 
{
    int vetor1[] = {1,3,5,7,9};
    int vetor2[] = {0,2,4,6,8};
    int tamanho1 = sizeof vetor1 / sizeof vetor1[0];
    int tamanho2 = sizeof vetor2 / sizeof vetor2[0];

    intercala(vetor1, tamanho1, vetor2, tamanho2);



    return 0;
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2)
{
    int novo_tamanho = tam1 + tam2;
    int vetor_intercalado[novo_tamanho] = {};

    for (int i = 0; i < novo_tamanho; i++)
    {
        vetor_intercalado[i] = i % 2 == 0 ? vet1[i] : vet2[i];
        cout << vetor_intercalado[i] << " ";
    }

    //return vetor_intercalado*;
}