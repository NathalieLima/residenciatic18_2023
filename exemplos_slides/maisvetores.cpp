// somar elementos
// calcular media vetor
// inserindo elementos novos

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () 
{
    string flag = "s";
    vector<float> vec;
    float soma = 0.0;

    do 
    {
        float nota = 0.0;

        cout << "Digite uma nota: ";
        cin >> nota;
        vec.push_back(nota);

        cout << "Para continuar, digite 's'. Se não, digite 'n'. ";
        cin >> flag;
    } 
    while (flag != "n");

    cout << "As notas são:" << endl;

    for (float x: vec)
    {
        soma += x;
        cout << x << endl;
    }

    cout << "A média dessas notas é: " << soma / vec.size();

    
    return 0;
}