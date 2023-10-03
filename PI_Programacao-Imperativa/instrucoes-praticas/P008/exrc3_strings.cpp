#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cctype>
#include <algorithm>

using namespace std;

int main (void) 
{
    srand(time(0));
    
    string texto1 = "";
    string texto2 = "";

    // a. gerar duas strings aleatoriamente com 10 caracteres
    for (int i = 0; i < 10; i++) 
    {
        texto1 += 'a' + rand()%('z' - 'a');
        texto2 += 'a' + rand()%('z' - 'a');
    }

    // b. transformar primeiro caractere em maiúscula
    texto1[0] = toupper(texto1[0]);
    texto2[0] = toupper(texto2[0]);

    cout << texto1 << "\n" << texto2 << "\n\n";

    // c. imrpimir as strings em ordem alfabética
    sort(texto1.begin(), texto1.end());
    sort(texto2.begin(), texto2.end());

    cout << texto1 << "\n" << texto2;


    return 0;
}