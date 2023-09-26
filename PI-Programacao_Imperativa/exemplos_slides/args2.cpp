#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    // verificações
    /*if (argc < 4) 
    {
        cout << "Insira 4 argumentos.";
    }
    else if (!isdigit(atoi(argv[2])) || !isdigit(atoi(argv[3]))) 
    {
        cout << "Insira um número válido.";
    }

    cout << isdigit(atoi(argv[2]));*/

    if (argc == 4) 
    {
        string operation = argv[1];

        if (operation == "int")
        {
            int resultado = atoi(argv[2]) / atoi(argv[3]);
            cout << "Resultado dessa operação entre inteiros é " << resultado << endl;
        }
        else
        {
            double resultado = atof(argv[2]) / atof(argv[3]);
            cout << "Resultado dessa operação entre pontos flutuantes é " << resultado << endl;
        }
    }


    return 0;
}