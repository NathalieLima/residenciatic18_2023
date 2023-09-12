/* Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente. */

#include <iostream>
#include <string>

using namespace std;

string pegarMesmoCaractere (string&, string&);

int main (void) 
{
    string texto1 = "tudo bem?";
    string texto2 = "boa noite";

    pegarMesmoCaractere(texto1, texto2);



    
    return 0;
}

string pegarMesmoCaractere(string &A, string &B)
{
    cout << B.strcomp(A);
}
