#include <iostream>
#include <cmath>

class Ponto
{
    private:
        double x, y;

    public:
        Ponto() {
            this->x = 0.0;
            this->y = 0.0;
        }

        Ponto(double _x, double _y)
        {
            this->x = _x;
            this->y = _y;
        }

        double getX() {
            return this->x;
        }

        double getY() {
            return this->y;
        }

        void setCoordenadas(double _x, double _y) {
            this->x = _x;
            this->y = _y;
        }

        double calcularDistancia() {
            return sqrt( pow( this->x - 0.0, 2.0) + pow( this->y - 0.0, 2.0) );
        }
};

int main(void)
{
	Ponto p1(3, 4);
	double distancia = p1.calcularDistancia();
	std::cout << "A distância do ponto (" << p1.getX() << ", " << p1.getY() << ") até a origem é aproximadamente " << distancia << std::endl;

    Ponto p2(-2, 7);
    p2.setCoordenadas(1, 1);
	double distancia_p2 = p2.calcularDistancia();
	std::cout << "A distância do ponto (" << p2.getX() << ", " << p2.getY() << ") até a origem é aproximadamente " << distancia_p2 << std::endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
	double distancia_p3 = p3.calcularDistancia();
	double distancia_p4 = p4.calcularDistancia();

	
	return 0;
}
