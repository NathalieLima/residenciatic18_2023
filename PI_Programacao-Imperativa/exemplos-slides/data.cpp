/*data.valida
data.getdia

funçoes na struct

pegar data e entrar com ela dd/mm/yyyy
poder pegar duas datas e verificar distancia de dynamic_cast
qnt tmp decorreu de uma hora pra outra


retornar string c dia/mes/ano

valores em int


25 de jan de 2003



formato americano*/



#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#define ANO_ATUAL 2023

using namespace std;

//verificar se é bissexto

struct Data 
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        void inicializarData(string);
        int validarData ();
};

void Data::inicializarData(string data) 
{
    string str1;
    int array[3] = {};
    
    stringstream ss(data);
    
    int i = 0;

    while (getline(ss, str1, '/')) {
        array[i] = stoi(str1);
        cout << str1 << endl;
        i++;
    }

    dia = array[0];
    mes = array[1];
    ano = array[2];

    cout << array[0] << array[1] << array[2];


}

int Data::validarData ()
{
    

    // se tem zero
    // se é digito

    // verificar se cada par individualmente é válido

    if ( dia < 1 || dia > 31 ) { return 1; }
    else if ( mes < 1 || mes > 12 ) { return 1; }
    else if ( ano < 1900 || ano > ANO_ATUAL ) { return 1; }

    // verificar se a combinação de pares é válida

    if (  )

}

int main (void)
{
    string s;

    s = "15/12/2003";

    transformarStringParaData(s);

}



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


bool validarData (int dia, int mes, int ano) {
    if (ano < 1900 || ano > 2100) { return false; }
    if (mes < 1 || mes > 12) { return false; }
    int diasNoMes = 0;
    if (mes == 2) {
        diasNoMes = 
        (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30;
    }
    else {
        diasNoMes = 31;
    }
    if (dia < 1 || dia > diasNoMes) { return false; }

    return true;
}

bool validarData(Data data) {
    return validarData(data.dia, data.mes, data.ano);
}

string transformarStringZeros(int numero) {
    string numeroString = to_string(numero);

    if (numero < 10){
        numeroString = "0" + numeroString;
    }

    return numeroString;
}

string transformarDataParaString(struct Data data)
{
    string dia = transformarStringZeros(data.dia);
    string mes = transformarStringZeros(data.mes);
    string ano = transformarStringZeros(data.ano);

    return dia+"/"+mes+"/"+ano;
}