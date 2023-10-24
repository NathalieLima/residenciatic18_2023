#include <iostream>

using namespace std;

class Desenhavel
{
    public:
        virtual void desenhar() = 0;
};

class Circulo : public Desenhavel
{
    public:
        void desenhar() override {
            cout << "Este é o desenho de um círculo!" << endl;
        }
};

class Retangulo : public Desenhavel
{
    public:
        void desenhar() override {
            cout << "Este é o desenho de um retângulo!" << endl;
        }
};

class Triangulo : public Desenhavel
{
    public:
        void desenhar() override {
            cout << "Este é o desenho de um triângulo!" << endl;
        }
};

int main(void) 
{
    Desenhavel* meu_desenho;

    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    meu_desenho = &circulo;
    meu_desenho->desenhar();

    meu_desenho = &retangulo;
    meu_desenho->desenhar();

    meu_desenho = &triangulo;
    meu_desenho->desenhar();


    return 0;
}