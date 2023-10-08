/* Implemente um programa que converta uma temperatura de Celsius para 
Fahrenheit. 
• Separe a lógica de conversão em uma função e a entrada/saída em outra 
função. 
• Teste a função de conversão com diferentes valores. */

#include <iostream>
#include <cmath>

using namespace std;

double converterCelsiusEmFahrenheit(double);

int main (void) 
{
    double celsius; 

    cout << "Insira uma temperatura em Celsius: ";
    cin >> celsius;

    cout << "Seu equivalente em Fahrenheit: " << converterCelsiusEmFahrenheit(celsius) << "\n\n";

    cout << "Mais alguns valores de exemplo: \n" << 
    "C: " << 100.0 << " | F: " << converterCelsiusEmFahrenheit(100.0) << "\n" <<
    "C: " << 50.0 << " | F: " << converterCelsiusEmFahrenheit(50.0) << "\n" <<
    "C: " << 19.8 << " | F: " << converterCelsiusEmFahrenheit(19.8) << "\n" <<
    "C: " << 189.3 << " | F: " << converterCelsiusEmFahrenheit(189.3) << "\n" <<
    "C: " << -15.0 << " | F: " << converterCelsiusEmFahrenheit(-15.0) << endl;


    return 0;
}

double converterCelsiusEmFahrenheit(double celsius)
{
    double fahrenheit = ((celsius / 5) * 9 + 32);

    return fahrenheit;
}