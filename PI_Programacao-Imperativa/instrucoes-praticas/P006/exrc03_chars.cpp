#include <iostream>
#include <cctype>

using namespace std;

int main (void) 
{
    // a. declarar 3 variáveis
    char ch1, ch2, ch3;

    // b. 2 caracteres
    cout << "Digite dois caracteres: ";
    cin >> ch1 >> ch2;
    cout << endl;

    // c. atribuir a ch3 o que antecede ch1; imprimir na tela em diferentes formatos
    ch3 = ( isprint(ch1) ? int(ch1) - 1 : '_' ); // verificar se é imprimível
    cout << "Decimal: " << int(ch3) << " | Octal: " << oct << int(ch3) << " | Hexadecimal: " << hex << int(ch3) << " | Caractere: " << ch3 << endl;

    // d. atribuir a ch3 o que antecede ch2; imprimir na tela em diferentes formatos
    if (isprint(ch3)) {
        ch3 = ch2 - 1;
        printf("Decimal: %d | Octal: %o | Hexadecimal: %x | Caractere: %c\n", ch3, ch3, ch3, ch3);
    } else {
        ch3 = '_';
        printf("Decimal: %d | Octal: %o | Hexadecimal: %x | Caractere: %c\n", ch3, ch3, ch3, ch3);
    }

    // e. atribuir a ch3 'A' se for maiúsculo, ' ' se minúsculo; imprimir na tela
    ch3 = isupper(ch1) ? 'A' : ' ';
    cout << "Valor se primeiro caractere for maiúsculo: " << ch3 << endl;

    // f. atribuir a ch3 'a' se for maiúsculo, ' ' se minúsculo; imprimir na tela
    ch3 = islower(ch2) ? 'a' : ' ';
    cout << "Valor se segundo caractere for minúsculo: " << ch3 << endl;

    // g. atribuir a ch3 '1' se for maiúsculo, ' ' se minúsculo; imprimir na tela
    ch3 = isdigit(ch1) || isdigit(ch2) ? '1' : ' ';
    cout << "Valor se no mínimo um dos dois for dígito: " << ch3 << endl;


    return 0;
}