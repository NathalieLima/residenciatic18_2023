/*
Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.
*/

#include <iostream>
#include <cfloat>

using namespace std;

void ordenarNumeros(float &, float &, float &, float &);

int main (void) 
{
    float a = 55, b = 34, c = 180, d = 1;

    cout << "Antigos valores: " << a << " " << b << " " << c << " " << d << endl;
    
    ordenarNumeros(a, b, c, d);    

    cout << "Valores ordenados: " << a << " " << b << " " << c << " " << d << endl;
    

    return 0;
}

void ordenarNumeros(float &num1, float &num2, float &num3, float &num4)
{
    float maior_valor = FLT_MAX;
    float valores[4] = {num1, num2, num3, num4};
    float array[4] = {maior_valor, maior_valor, maior_valor, maior_valor};
    int indice;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (valores[j] < array[i] )
            {
                array[i] = valores[j];
                indice = j;
            }
        }
        
        valores[indice] = maior_valor;
    }

    num1 = array[0];
    num2 = array[1];
    num3 = array[2];
    num4 = array[3];
}