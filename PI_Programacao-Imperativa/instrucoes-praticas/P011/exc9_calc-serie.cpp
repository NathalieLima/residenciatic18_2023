#include <iostream>

using namespace std;

float calc_serie(int N);

int main (void)
{
    cout << calc_serie(5) << endl;
    cout << calc_serie(10) << endl;


    return 0;
}

float calc_serie(int N)
{
    float serie = 0.0;
    float denominador = N;

    for (int i = 1; i <= N; i++)
    {
        serie += i / denominador;
        denominador -= 1;
    }

    return serie;
}
