#include <iostream>

using namespace std;

int main (void)
{
    char letra1 = '0';

    cout << "\n-------ETAPA A--------" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << char(int(letra1) + i) << " - " << int(letra1) + i << endl;
    }

    cout << "\n-------ETAPA B--------" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Octal: " << oct << int(letra1) + i << " | Hexa: " << hex << int(letra1) + i << endl;
    }

    cout << "\n-------ETAPA C--------" << endl;

    char valor_usuario;
    
    cout << "Insira um caractere qualquer: ";
    cin >> valor_usuario;

    cout << "Dec: " << dec << int(valor_usuario) << " | Octal: " << oct << int(valor_usuario) << " | Hexa: " << hex << int(valor_usuario) << endl;

    cout << "\n-------ETAPA D--------" << endl;

    char carac_especial1 = 135;
    char carac_especial2 = 198;

    cout << "Impressão de caracteres especiais: " << carac_especial1 << " e " << carac_especial2 << endl;


    return 0;    
}