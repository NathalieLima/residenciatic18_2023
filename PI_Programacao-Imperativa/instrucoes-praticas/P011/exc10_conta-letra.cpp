#include <iostream>
#include <string>

using namespace std;

void contarLetraRepetida(string, char, int *, int &);

int main (void) 
{
    string texto = "Boa noite, pessoal, tão de boa?";
    char letra = 'o';
    int vetor[texto.length()] = {};
    int tam_vetor = 0;

    contarLetraRepetida(texto, letra, vetor, tam_vetor);

    cout << "O texto é: '" << texto << "' \n" <<
    "Quantidade de letra '" << letra << "': " << tam_vetor;


    return 0;
}

void contarLetraRepetida(string cadeia, char letra, int *vetor, int &tam_vetor)
{
    int j = 0;

    for (unsigned int i = 0; i < cadeia.length(); i++) 
    {
        if (cadeia[i] == letra) {
            vetor[j] = i;
            j++;
        }   
    }

    tam_vetor = j;    
}