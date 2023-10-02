/* Escreva um programa que leia os valores (x, y) de um ponto do plano e
informe em qual quadrante o ponto se encontra. Use apenas o operador
condicional (?). */

#include <iostream>

using namespace std;

int main (void) 
{
    double x, y;

    cout << "Valores do ponto: ";
    cin >> x >> y;

    string posicao = ( (x > 0 && y > 0) ? "no primeiro quadrante" : 
                       (x < 0 && y > 0) ? "no segundo quadrante" : 
                       (x < 0 && y < 0) ? "no terceiro quadrante" : 
                       (x > 0 && y < 0) ? "no quarto quadrante" : 
                       "sobre um dos eixos" );

    cout << "O ponto se encontra " << posicao << " do plano cartesiano.";

    return 0;
}