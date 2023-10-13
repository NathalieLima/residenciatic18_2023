#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dependente {
    private:
        string nome;
    public:
        Dependente(string n) {
            nome = n;
        }
};

class Cliente {
    private:
        string nome, cpf;
        vector<Dependente> dependentes;
    public:
        Cliente(string n, string c) {
            nome = n;
            cpf = c;
        }
    void novoDependente(Dependente d) {
        dependentes.push_back(d);
    }
};

int main (void)
{
    Dependente novo_dependente = "Kevin";
    
}