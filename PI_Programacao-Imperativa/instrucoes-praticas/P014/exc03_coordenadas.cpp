/* Crie uma struct chamada "Ponto" que represente as coordenadas (x, y) de um 
ponto no plano. 
• Implemente uma função que calcule a distância entre dois pontos. 
• Utilize a struct e a função para calcular e exibir a distância entre dois pontos 
dados.  */

#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    double coordenada_x;
    double coordenada_y;
    
};

double calcularDistanciaEntrePontos(Ponto ponto1, Ponto ponto2);

int main (void) 
{
    Ponto a = {10.0, 20.0};
    Ponto b = {30.0, 40.5};

    cout << calcularDistanciaEntrePontos(a, b) << endl;


    return 0;
}

double calcularDistanciaEntrePontos(Ponto ponto1, Ponto ponto2)
{
    return sqrt( pow((ponto2.coordenada_x - ponto1.coordenada_x), 2) + pow((ponto2.coordenada_y - ponto1.coordenada_y), 2) );
}