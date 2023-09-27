#include <iostream>

using namespace std;

int main(void) 
{
    // LETRA A
    char ch1, ch2, ch3;

    cout << "----------LETRA B----------" << endl;

    cout << "Digite um caractere: ";
    cin >> ch1;

    cout << "----------LETRA C----------" << endl;

    cout << (isupper(ch1) ? "É uma letra maiúscula" : "Não é maiúsculo") << "\n" << 
    (islower(ch1) ? "É uma letra minúscula" : "Não é minúsculo") << "\n" << 
    (isdigit(ch1) ? "É um dígito" : "Não é dígito") << "\n" << 
    (isalnum(ch1) ? "É outro tipo de caractere" : "Não é outro tipo de caractere") <<
    endl;

    cout << "----------LETRA D----------" << endl;
    
    ch2 = 81;
    cout << "Decimal: " << int(ch2) << " | Octal: " << oct << int(ch2) << " | Hexadecimal: " << hex << int(ch2) << "| Caractere: " << ch2 << endl;
    
    cout << "----------LETRA E----------" << endl;
    
    ch3 = tolower(ch2);
    cout << "Decimal: " << int(ch3) << " | Octal: " << oct << int(ch3) << " | Hexadecimal: " << hex << int(ch3) << "| Caractere: " << ch3 << endl;


    return 0;
}