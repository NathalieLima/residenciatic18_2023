#include <iostream>

using namespace std;

int main (void)
{
    char letra1 = '0';
    char letra2 = int(letra1) + 1;
    char letra3 = '2';
    char letra4 = '3';
    char letra5 = '4';
    char letra6 = '5';
    char letra7 = '6';
    char letra8 = '7';
    char letra9 = '8';
    char letra10 = '9';

    cout << "\n-------ETAPA A--------" << endl;

    cout << "'" << letra1 << "' - " << int(letra1) << endl;
    cout << "'" << letra2 << "' - " << int(letra2) << endl;
    cout << "'" << letra3 << "' - " << int(letra3) << endl;
    cout << "'" << letra4 << "' - " << int(letra4) << endl;
    cout << "'" << letra5 << "' - " << int(letra5) << endl;
    cout << "'" << letra6 << "' - " << int(letra6) << endl;
    cout << "'" << letra7 << "' - " << int(letra7) << endl;
    cout << "'" << letra8 << "' - " << int(letra8) << endl;
    cout << "'" << letra9 << "' - " << int(letra9) << endl;
    cout << "'" << letra10 << "' - " << int(letra10) << endl;

    cout << "\n-------ETAPA B--------" << endl;

    cout << "Octal: " << oct << int(letra1) << " | Hexa: " << hex << int(letra1) << endl;
    cout << "Octal: " << oct << int(letra2) << " | Hexa: " << hex << int(letra2) << endl;
    cout << "Octal: " << oct << int(letra3) << " | Hexa: " << hex << int(letra3) << endl;
    cout << "Octal: " << oct << int(letra4) << " | Hexa: " << hex << int(letra4) << endl;
    cout << "Octal: " << oct << int(letra5) << " | Hexa: " << hex << int(letra5) << endl;
    cout << "Octal: " << oct << int(letra6) << " | Hexa: " << hex << int(letra6) << endl;
    cout << "Octal: " << oct << int(letra7) << " | Hexa: " << hex << int(letra7) << endl;
    cout << "Octal: " << oct << int(letra8) << " | Hexa: " << hex << int(letra8) << endl;
    cout << "Octal: " << oct << int(letra9) << " | Hexa: " << hex << int(letra9) << endl;
    cout << "Octal: " << oct << int(letra10) << " | Hexa: " << hex << int(letra10) << endl;

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