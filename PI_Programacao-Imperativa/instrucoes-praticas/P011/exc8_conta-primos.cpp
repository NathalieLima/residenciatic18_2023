/* Escreva um programa em C++ que imprima todos os números primos de 1 a 100. */

#include <iostream>

using namespace std;

int conta_primos(int *vet, int qtde);

int main (void) 
{
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,23};
    int tam = sizeof vetor / sizeof vetor[0];
    int qtde_primos = conta_primos(vetor, tam);

    cout << "\nQuantidade de números primos: " << qtde_primos << endl;


    return 0;
}

int conta_primos(int *vet, int qtde)
{
    int soma = 0;
    int numero;

    for (int i = 0; i < qtde; i++)
    {
        numero = vet[i];

        if (numero == 0 || numero == 1 ) {
            soma = soma;
        }
        else
        {
            bool is_primo = true;
            
            for (int i = 2; i < numero && is_primo; i++) 
            {
                if (numero % i == 0 && numero != i ) {
                    is_primo = false;
                }
            }
            
            if (is_primo) {
                cout << numero << " ";
                soma++;
            }
        }
    }

    return soma;
}