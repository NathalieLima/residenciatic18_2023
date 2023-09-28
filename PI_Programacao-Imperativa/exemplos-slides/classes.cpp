#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Livro {
    private:
        string nome;
        vector<string> generos;
        int ano_lancamento;

        bool validarNome(string _nome) {
            return _nome.empty();
        }

    public:

        Livro() {
            nome = "[vazio]";
            generos = {"[vazio]"};
            ano_lancamento = 2023;
        }

        ~Livro();

        Livro(string _nome, vector<string> _generos, int _ano_lancamento) {
            if ( validarNome(_nome) ) {
                nome = "[vazio]";
            }
            else {
                nome = _nome;
                generos = _generos;
                ano_lancamento = _ano_lancamento;
            }
        }

        string getNome() {
            return nome;
        }

        void getGeneros() {
            for (unsigned int i = 0; i < generos.size(); i++) {
                cout << generos[i] << " ";
            }
        }

        int getAnoLancamento() {
            return ano_lancamento;
        }

        void setNome(string _nome) {

            if ( validarNome(_nome) ) {
                nome = "[vazio]";
            }
            else {
                nome = _nome;
            }
        }

        void setAnoLancamento(int _ano_lancamento) {
            ano_lancamento = _ano_lancamento;
        }

        void setGeneros(vector<string> _generos) {
            generos = _generos;
        }

        
};

Livro::~Livro()
{
    cout << "O livro " << nome << " se autodestruirá!" << endl;
}

int main (void) 
{
    // instâncias (objetos) da classe

    Livro livro_ester = {"", {"Comédia"}, 2018};
    Livro livro_joao;
    Livro livro_nathalie = {"Bíblia", {"Religioso"}, 1900};
    Livro livro_maria = {"Percy Jackson", {"Aventura", "Infantil", "Fantasia"}, 2004};
    Livro livro_pietro = {"Poder do Hábito", {"Autoajuda"}, 2015};

    // testes de funcionamento

    livro_ester.getGeneros();

    cout << livro_joao.getAnoLancamento() << endl;
    
    cout << livro_maria.getNome() << endl;
    livro_maria.setNome("Percy Jackson e o Ladrão de Raios");
    cout << livro_maria.getNome() << endl;

    cout << livro_nathalie.getNome() << endl;
    livro_nathalie.getGeneros();
    cout << endl;

    livro_pietro.setNome("");
    cout << livro_pietro.getNome() << endl;

    cout << endl;


    return 0;
}