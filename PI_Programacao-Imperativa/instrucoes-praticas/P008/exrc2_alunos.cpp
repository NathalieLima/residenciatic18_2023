#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (void) 
{
    float primeiras_notas[15] = {};
    float segundas_notas[15] = {};
    float media_notas[15] = {};
    
    for (unsigned int i = 0; i < 15; i++) 
    {
        cout << "------" << endl << "ALUNO " << (i + 1) << endl;
        //

        // a. simular notas numa avaliação; guardar em array
        primeiras_notas[i] =  ((float)rand()/RAND_MAX)*10;

        // b. simular notas numa segunda avaliação; guardar em array
        segundas_notas[i] = ((float)rand()/RAND_MAX)*10;

        cout << "Primeira nota: " << primeiras_notas[i] << " | Segunda nota: " << segundas_notas[i] << endl;

        // c. comparar notas e fazer avaliação
        cout << "Portanto, " << ( primeiras_notas[i] > segundas_notas[i] ? "piorou." : (primeiras_notas[i] < segundas_notas[i] ? "melhorou!" : "manteve a nota.") ) << endl;

        // d. preencher terceiro array conforme média nas 2 avaliações
        media_notas[i] = (primeiras_notas[i] + segundas_notas[i]) / 2;    

        cout << "Média: " << media_notas[i] << endl;
     }
    

    return 0;
}
