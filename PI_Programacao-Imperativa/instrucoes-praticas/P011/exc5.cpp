#include <iostream>

using namespace std;

int insere_meio( int *vetor, int qtde, int elemento);

int main (void) 
{
    int vetor[] = {1,2,3,4,5,6};
    int qtde = 6;

    qtde = insere_meio(vetor, qtde, 100);

    for (int i = 0; i < qtde; i++)
    {
        cout << vetor[i] << " ";
    }
    

    return 0;
}

int insere_meio( int *vetor, int qtde, int elemento)
{
    int nova_qtde = qtde+1;   
    int indice = qtde / 2;

    

    for (int i = indice+1; i <= nova_qtde; i++)
    {
        vetor[i] = vetor[i-1];
    }

    vetor[indice] = elemento;

    return nova_qtde;
}
