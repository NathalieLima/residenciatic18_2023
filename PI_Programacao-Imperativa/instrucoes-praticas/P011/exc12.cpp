/* Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente. */

#include <iostream>
#include <string>

using namespace std;

string pegarMesmoCaractere (string&, string&);

int main (void) 
{
    string texto1 = "bembem?";
    string texto2 = "bbbbbbb";

    cout << pegarMesmoCaractere(texto1, texto2) << endl;

    string texto3 = "Boa noite, tudo bem??";
    string texto4 = "Tudo, espero que contigo também!!";

    cout << pegarMesmoCaractere(texto3, texto4) << endl;

    
    return 0;
}

string pegarMesmoCaractere(string &texto1, string &texto2)
{
    string texto_unico, letras_iguais;
    
    // pegar valores únicos
    for (unsigned int i = 0; i < texto1.length(); i++)
    {
        if (texto_unico.find(texto1[i]) == std::string::npos) {
            texto_unico += texto1[i];
        }   
    }

    // verificar se já não existe letra de texto2 em texto1-texto_unico e verificar se essa letra já não foi adicionada
    for (unsigned int i = 0; i < texto2.length(); i++)
    {
        if (texto_unico.find(texto2[i]) != std::string::npos && letras_iguais.find(texto2[i]) == std::string::npos) {
            letras_iguais += texto2[i];
        }
    }

    return letras_iguais;
}
