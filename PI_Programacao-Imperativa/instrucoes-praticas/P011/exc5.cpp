#include <iostream>

using namespace std;

int insere_meio( int *vetor, int qtde, int elemento);

int main (void) 
{
    int vetor[] = {1,2,3,4,5,6};
    int qtde = 6;

    cout << "Antes: ";

    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    
    qtde = insere_meio(vetor, qtde, 100);

    cout << "\nDepois: ";

    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    

    return 0;
}

int insere_meio( int *vetor, int qtde, int elemento)
{
    int nova_qtde = qtde + 1;  
    int novo_vetor[nova_qtde] = {}; 
    int indice = qtde / 2;
    
    for (int i = nova_qtde; i >= indice; i--) {
        novo_vetor[i] = vetor[i - 1];
    }

    vetor[indice] = elemento;
    vetor = novo_vetor;

    return nova_qtde;
}