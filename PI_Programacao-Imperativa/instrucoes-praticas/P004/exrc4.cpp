#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main (void) 
{
    // a. identificar maior e menor valor de float e printá-los
    
    cout << "--ETAPA A--" << endl;

    float smaller_value = numeric_limits<float>::min();
    float bigger_value = numeric_limits<float>::max();
    
    cout << "O menor valor possível é " << smaller_value << ", enquanto que o maior é " << bigger_value << "." << endl;

    // b. criar variável float pif e atribuir maior número de casas de pi; imprimir valor

    cout << "\n--ETAPA B--" << endl;

    float pif = 3.14159265358979323846264338327950288;
   
    cout << "Maior número de casas decimais da constante PI é " << pif << "." << endl;

    // c. explorar formatação de saída com casas decimais
    
    cout << "\n--ETAPA C--" << endl;

    cout << "Constante pi com 2 casas decimais: " << fixed << setprecision(2) << pif << endl <<
    "com 4 casas: " << fixed << setprecision(4) << pif << endl <<
    "com 8 casas: " << fixed << setprecision(8) << pif << endl <<
    "com 16 casas: " << fixed << setprecision(16) << pif << endl;

    // d. criar variável double pid e atribuir maior número de casas de pi; imprimir valor
    
    cout << "\n--ETAPA D--" << endl;

    double pid = 3.14159265358979323846264338327950288;
    
    cout << "pi: " << pid << endl;

    // e. identificar se existe diferença entre pif e pid
    
    cout << "\n--ETAPA E--" << endl;

    for (int i = 2; i <= 16; i = i * 2)
    {
        cout << i << " casas - " << setprecision(i) << "Float: " << pif << " | Double: " << pid << endl;
        
    }

    /* Existe diferença a partir da impressão de 8 casas decimais. Nesse ponto, enquanto o double somente corta o restante 
    das casas, float arredonda. Com 16 casas, ambos arrendondam, contudo o tipo double mantém uma precisão maior.*/

    // f. diferença entre double e long double
    
    cout << "\n--ETAPA F--" << endl;

    long double pild = 3.1415926535265358979389793238462384626433832792643383279502885028841971419716939969399375103751058209582097494474944592305923078164781640628606286208992089986280862803482534825342113421170677067;

    cout << "Double: " << pid << " | Long double: " << pild << endl;
    cout << "Tamanho de ambos, respectivamente: " << sizeof(pid) << " e " << sizeof(pild);

    /* Além de um tamanho de armazenamento diferente, com long double possuindo mais espaço, 
    a diferença principal se encontra na precisão. Quando impressos, valores do tipo long double 
    apresentam uma precisão maior do que os de tipo double. */


    return 0;
}