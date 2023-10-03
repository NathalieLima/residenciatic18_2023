#include <iostream>

using namespace std;

int main(void) 
{
    int altura;

    cout << "Digite a altura dos padrões: ";
    cin >> altura;
    
    cout << endl;

    // a. preenchido com todos os asteriscos (altura x altura)
    cout << "PADRÃO A\n";
    for (int i = 0; i < altura; i++) 
    {
        for (int j = 0; j < altura; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }

    // b. linhas crescentes de asteriscos
    cout << "\nPADRÃO B\n";
    for (int i = 1; i <= altura; i++) 
    {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }

    // c. extremidades preenchidas (altura x altura)
    cout << "\nPADRÃO C\n";
    for (int i = 0; i < altura; i++) 
    {
        for (int j = 0; j < altura; j++) 
        {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << "* ";
            } else {
                cout << "  "; // deixar o meio vazio
            }
        }
        
        cout << endl;
    }

    return 0;
}