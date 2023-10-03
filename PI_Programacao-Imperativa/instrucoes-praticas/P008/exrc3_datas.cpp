#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() 
{
    string data = "";
    string valores_data[3] = {};

    // a. ler do teclado uma data, separar dia, mês e ano e imprimir
    
    cout << "Data: ";
    cin >> data;
    
    istringstream iss(data);
    string substring;
    int i = 0;
    
    while (getline(iss, substring, '/')) {
        valores_data[i] = substring;
        i++;
    }

    cout << "Dia: " << valores_data[0] << "\n" <<
    "Mês: " << valores_data[1] << "\n" <<
    "Ano: " << valores_data[2] << endl;
    
    // b. verificar se a data fornecida é válida
    
    // transformar em inteiros
    int dia = stoi(valores_data[0]);
    int mes = stoi(valores_data[1]);
    int ano = stoi(valores_data[2]);
    bool is_data_valida = false;
    
    if (ano >= 0 && mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                is_data_valida = (dia >= 1 && dia <= 31);
            case 4: case 6: case 9: case 11:
                is_data_valida = (dia >= 1 && dia <= 30);
            case 2:
                bool is_bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        
                if (is_bissexto) {
                    is_data_valida = (dia >= 1 && dia <= 29);
                } else {
                    is_data_valida = (dia >= 1 && dia <= 28);
                }
        }
    }
    
    if (is_data_valida) 
    {
        cout << "Esta é uma data válida!" << endl;
        
        // c. se for data válida, imprimi-la por extenso
    
        string mes = (valores_data[1].length() == 1 ? ("0" + valores_data[1]) : valores_data[1]);
        string mes_extenso = ( mes == "01" ? "janeiro" : 
                            mes == "02" ? "fevereiro" :
                            mes == "03" ? "março" :
                            mes == "04" ? "abril" :
                            mes == "05" ? "maio" :
                            mes == "06" ? "junho" :
                            mes == "07" ? "julho" :
                            mes == "08" ? "agosto" :
                            mes == "09" ? "setembro" :
                            mes == "10" ? "outubro" :
                            mes == "11" ? "novembro" :
                            "dezembro" );
    
        cout << valores_data[0] << " de " << mes_extenso << " de " << valores_data[2] << endl;
    } else {
        cout << "Esta não é uma data válida!";
    }
    

    return 0;
}