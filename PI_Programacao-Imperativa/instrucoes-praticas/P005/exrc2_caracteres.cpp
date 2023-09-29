#include <iostream>

using namespace std;

int main(void) 
{
    // LETRA A: declarar 3 variáveis
    char ch1, ch2, ch3;

    cout << "\n--LETRA B--" << endl; // obter ch1 de cin

    cout << "Digite um caractere: ";
    cin >> ch1;

    cout << "\n--LETRA C--" << endl; // c. verificar o tipo de caractere

    cout << ( ch1 >= 'A' && ch1 <= 'Z' ? "É uma letra maiúscula" : 
    ( ch1 >= 'a' && ch1 <= 'z' ? "É uma letra minúscula" : 
    ( ch1 >= '0' && ch1 <= '9' ? "É um dígito" : 
    "É outro tipo de caractere" ) ) ) << endl;

    cout << "\n--LETRA D--" << endl; // d. verificar se há no std funções próprias para isso

    cout << ( isupper(ch1) ? "É uma letra maiúscula" : 
    ( islower(ch1) ? "É uma letra minúscula" : 
    ( isdigit(ch1) ? "É um dígito" : 
    "É outro tipo de caractere" ) ) ) << endl;

    cout << "\n--LETRA E--" << endl; // e. atribuir 81 e imprimir formatos

    ch2 = 81;
    cout << "Decimal: " << int(ch2) << " | Octal: " << oct << int(ch2) << " | Hexadecimal: " << hex << int(ch2) << " | Caractere: " << ch2 << endl;
    
    cout << "\n--LETRA F--" << endl; // f. atribuir versão minúscula de 81 e imprimir formatos
    
    ch3 = tolower(ch2);
    cout << "Decimal: " << int(ch3) << " | Octal: " << oct << int(ch3) << " | Hexadecimal: " << hex << int(ch3) << " | Caractere: " << ch3 << endl;


    return 0;
}