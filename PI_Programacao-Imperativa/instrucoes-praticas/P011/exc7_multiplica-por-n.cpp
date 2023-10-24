#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n);

int main (void)
{
    int vetor[] = {55, 60, 8, 9, 6};
    int qtde = sizeof vetor / sizeof vetor[0];

    multiplica_por_n(vetor, qtde, 10);

    
    return 0;
}

void multiplica_por_n(int *vet, int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        cout << vet[i] * n << " ";
    }
}