/* 
Resolução de problemas nas classes Ponto e Poligono
add p1 = p2
add p1 == p2
*/

#include <iostream>
#include <vector>

using namespace std;

class Ponto {
    private:
        float x, y;

    public: 
        Ponto() {
            x = 0;
            y = 0;
        }

        Ponto(float _x, float _y) {
            x = _x;
            y = _y;
        }

        void setPontoY(float _y) {
            y = _y;
        }

        void setPontoX(float _x) {
            x = _x;
        }

        float getPontoY() {
            return y;
        }

        float getPontoX() {
            return x;
        }
};

class Poligono {
    private:
        vector<Ponto> pontos;

    public:
        void setPontos(Ponto ponto) {
            pontos.push_back(ponto);
        }

        string getCoordenadas() {
            string coordenadas;

            for (Ponto p: pontos) {
                coordenadas += ( "(" + to_string(p.getPontoX()) + ", " + to_string(p.getPontoY()) + ")" );
            }

            return coordenadas;
        }
};

int main (void) 
{
    Poligono poli;

    cout << "Criando um polígono!" << endl;

    char sn;

    do {
        float x, y;
        cout << "Digite as coordenadas do ponto: ";
        cin >> x >> y;

        Ponto p;
        p.setPontoX(x);
        p.setPontoY(y);

        poli.setPontos(p);
 
        cout << "Deseja inserir mais pontos (s/n)? ";
        cin >> sn;
    } while (sn != 'n');

    cout << "As coordenadas digitadas foram:" << endl;
    cout << poli.getCoordenadas();


    return 0;
}