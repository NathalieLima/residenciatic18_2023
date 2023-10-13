#include <iostream>
#include <string>

using namespace std;

class Animal 
{
private:
    string nome;
    int idade;

public:
    Animal (string _nome, int _idade) {
        nome = _nome;
        idade = _idade;
    }

    void fazerSom();
};

class Cachorro: Animal {
public:
    Cachorro(string _nome, int _idade):Animal(_nome, _idade) {
    }

    void fazerSom() {
        cout << "Au Au!" << endl;
    }
};

int main (void)
{
    Cachorro meu_dog("Toby", 5);
    meu_dog.fazerSom();
}