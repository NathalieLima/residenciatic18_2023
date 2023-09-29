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

    for (int i = 0; i < 10; i++) {
        texto1 += 'a' + rand()%('z' - 'a');
        texto2 += 'a' + rand()%('z' - 'a');
    }

    texto1[0] = toupper(texto1[0]);
    texto2[0] = toupper(texto2[0]);
    char primeira = int('a') - 1;

    for ( unsigned int i = 0; i < texto1.length(); i++ ) {
        if ( texto1[i] > primeira ) {
            cout << "ola";
            cout << texto1[i];
            primeira = texto1[i];
        }
    }

    cout << sort(texto1, texto1.length());

    cout << texto1 << " " << texto2;

    return 0;
}