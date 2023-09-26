#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;

    void imprimirInfo();
};

void Pessoa::imprimirInfo() {
    cout << "haha";
}