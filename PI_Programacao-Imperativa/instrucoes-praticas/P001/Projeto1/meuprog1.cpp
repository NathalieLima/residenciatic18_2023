#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    string nome_de_usuario;

    cout << "Digite o seu nome: ";
    cin >> nome_de_usuario;

    cout << endl << "Bom dia, " + nome_de_usuario << "!";
    

    return 0;
}