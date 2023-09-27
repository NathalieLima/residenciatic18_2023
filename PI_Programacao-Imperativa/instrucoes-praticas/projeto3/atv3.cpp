#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main (void) 
{
    

    float smaller_value = numeric_limits<float>::min();
    float bigger_value = numeric_limits<float>::max();
    float pif = 3.14159265358979323846264338327950288;

    //std::cout << std::fixed << std::setprecision(1);
    cout << "O menor valor possível é " << smaller_value << ", enquanto que o maior é " << bigger_value << "." << endl;
    cout << "Maior número de casas decimais da constante PI é " << fixed << setprecision(50) << pif << "." << endl;


    // QUESTÃO D

    double pid = 3.1415926535265358979389793238462384626433832792643383279502885028841971419716939969399375103751058209582097494474944592305923078164781640628606286208992089986280862803482534825342113421170677067;
    cout << "pi: " << pid << " " 
    << setprecision(2) << M_PI
    << setprecision(100) << pid << endl << "--------------------" << endl;




    for (int i = 2; i <= 16; i = i * 2)
    {
        cout << setprecision(i) << "Float: " << pif << "|| Double: " << pid << endl;
        cout << i << endl;
    }

    // Existe diferença.

    long double pid3 = 3.1415926535265358979389793238462384626433832792643383279502885028841971419716939969399375103751058209582097494474944592305923078164781640628606286208992089986280862803482534825342113421170677067;

    cout << setprecision(100) << "Double: " << pid << "|| Long double: " << pid3 << endl;
    cout << sizeof(pid) << " e " << sizeof(pid3);

    return 0;
}