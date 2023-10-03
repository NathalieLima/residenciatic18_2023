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
    
    string strings[10] = {};

    // a. gerar 10 strings aleatoriamente com 10 caracteres
    cout << "10 STRINGS ANTES" << endl;

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            strings[i] += 'a' + rand()%('z' - 'a');
        }

        cout << strings[i] << " ";
    }

    // b. transformar primeiro caractere em maiúscula
    cout << "\n\n10 STRINGS DEPOIS" << endl;

    for (int i = 0; i < 10; i++) 
    {
        strings[i][0] = toupper(strings[i][0]);

        cout << strings[i] << " ";
    }


    return 0;
}