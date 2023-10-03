#include <iostream>

using namespace std;

int main() {
    unsigned char info_genetica;

    // a. ler informação genética com unsigned char
    cout << "Digite a informação genética da planta: ";
    cin >> info_genetica;

    // b. identificar genes presentes na planta
    cout << "Dos genes estudados, estão presentes: ";
    int genes_presentes = 0;

    for (int i = 0; i < 8; i++) 
    {
        if ( info_genetica & (1 << i) ) {
            genes_presentes++;
            cout << i + 1 << " ";
        }
    }

    cout << endl;

    // c. solicitar a informação sobre qual gene específico deseja verificar
    int gene_desejado;

    cout << "Especifique o gene a ser verificado (um valor entre 1 e 8): ";
    cin >> gene_desejado;

    if (gene_desejado >= 1 && gene_desejado <= 8) {
        int mascara = 1 << (gene_desejado - 1);

        cout << "O gene " << gene_desejado << ( (info_genetica & mascara) ? " está" : " não está ") << " presente nesta planta." << endl;
        
    } else {
        cout << "Aviso: Favor inserir um valor entre 1 e 8." << endl;
    }


    return 0;
}
