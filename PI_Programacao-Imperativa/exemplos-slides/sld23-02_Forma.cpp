#include <iostream>
#include <cmath>

using namespace std;

class Forma
{
    protected:
        float area;

    public:
        float calcularArea();

        float getArea() {
            return area;
        }
};

class Retangulo: Forma
{
    private:
        float base, altura;
        
    public:
        Retangulo(float _base, float _altura):Forma() {
            base = _base;
            altura = _altura;
        }

        float calcularArea() {
            return base * altura;
        }
};

class Circulo: Forma
{
    private:
        const float pi = 3.14;
        float raio;
        
    public:
        Circulo(float _raio):Forma() {
            raio = _raio;
        }

        void calcularArea() {
            area = pi * pow(raio, 2);
        }
};

int main (void)
{
    Retangulo meu_retangulo = {10.0, 20.0};
    cout << meu_retangulo.calcularArea() << endl;

    Circulo meu_circulo = 10;
    meu_circulo.calcularArea();
    meu_circulo.getArea();
    cout << meu_circulo.getArea();
}

