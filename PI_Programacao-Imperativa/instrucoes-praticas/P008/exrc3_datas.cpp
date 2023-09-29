#include <iostream>
#include <string>

using namespace std;

int main (void) 
{
    string data;

    cout << "Data: ";
    cin >> data;

    

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto = "teste,bem,sucedido,de,coisas,fazer";
    char delimitador = ',';
    string acumulador = "";
    string array[6] = {};
    int j = 0;

    for ( int i = 0; i <= texto.length(); i++ ) {
        cout << texto[i] << endl;
        if (texto[i] == delimitador || i == texto.length()) {
            array[j] = acumulador;
            acumulador = "";
            j++;
        }
        else {
            acumulador += texto[i];
        }
    }
    
    for (string x: array) {
        cout << "ola" << x << endl;
    }
}