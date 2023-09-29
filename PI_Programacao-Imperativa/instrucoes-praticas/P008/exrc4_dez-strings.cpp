#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (void) 
{
    srand(time(0));
    
    string array[10];

    for (int i = 0; i < 10; i++) {
        int j = 0;
        while ( j < 10 )
        {
            array[i] += 'a' + rand()%('z' - 'a');
            j++;
        }
        cout << array[i] << endl;
    }
    cout << "---------" << endl;

    for (int i = 0; i < 10; i++) {
        array[i][0] = toupper(array[i][0]);
        cout << array[i] << endl; 
    }


    return 0;
}