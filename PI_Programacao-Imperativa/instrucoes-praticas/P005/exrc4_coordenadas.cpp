#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    // a. declarar variáveis
    double x, y, z;

    // b. pedir ao usuário 2 pf
    cout << "Digite um número de ponto flutuante: ";
    cin >> x;
    cout << "Digite outro número de ponto flutuante: ";
    cin >> y;

    // c. identificar lado da curva; imprimir resultado
    double funcao_x = 5 * x + 2;
    cout << "O ponto está " << (y == 0 ? "na" : y > funcao_x ? "acima" : "abaixo") << " da curva." << endl;

    // d. distância euclidiana
    z = sqrt( pow(x, 2) + pow(y, 2) );
    cout << "Distância euclidiana entre os pontos: " << z << endl;

    /* Resultado da pesquisa: determina-se raiz quadrada através da função sqrt(), presente na biblioteca cmath; 
    exige como parâmetro um número. */

    // e. z receber produto das variáveis
    z = x * y;

    cout.setf(ios::scientific);
    cout << "Resultado do produto entre os pontos em notação científica: " << z << endl;
    

    return 0;
}