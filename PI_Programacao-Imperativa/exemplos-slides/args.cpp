#include <iostream>
#include <cstring>

using namespace std;

int main (int argc, char* argv[])
{
    if (argc > 2)
    {
        unsigned int int_ano = atoi(argv[2]);
        unsigned int idade = 2023 - int_ano;

        cout << "Olá, " << argv[1] << ", sua idade é " << idade << endl;
    }
    

    return 0;
}