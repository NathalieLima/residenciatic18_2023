#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Data 
{
    private:
        int dia, mes, ano;
        
        string formato;

    public:
        //static int s_dia, s_mes, s_ano;

        Data() {
            dia = 1;
            mes = 1;
            ano = 1900;
        }

        Data(int dia = 1, int mes = 1, int ano = 1900) {
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        void setDia(int);
        void setMes(int);
        void setAno(int);
        int getDia();
        int getMes();
        int getAno();
        string adicionarZero(int numero);
        static void separarNumeros(string, int &, int &, int &);
        static bool validarData(int dia, int mes, int ano);             // verificar se a data fornecida é válida
        static bool validarData(string data);
        string converterParaTextoExtenso();
        string converterParaString();


};

int Data::getDia() {
    return dia;
}

int Data::getMes() {
    return mes;
}

int Data::getAno() {
    return ano;
}

void Data::setDia(int dia) {
    this->dia = dia;
}

void Data::setMes(int mes) {
    this->mes = mes;
}

void Data::setAno(int ano) {
    this->ano = ano;
}

void Data::separarNumeros(string data, int &dia, int &mes, int &ano)
{
    istringstream iss(data);
    string numeros_data[3] = {0, 0, 0};
    string substring;
    int i = 0;
    
    while (getline(iss, substring, '/')) {
        numeros_data[i] = substring;
        cout << "ola";
        i++;
    }

    dia = stoi(numeros_data[0]);
    mes = stoi(numeros_data[1]);
    ano = stoi(numeros_data[2]);
} 
    
bool Data::validarData(int dia, int mes, int ano)
{    
    if (ano >= 0 && mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return dia >= 1 && dia <= 31;
            case 4: case 6: case 9: case 11:
                return dia >= 1 && dia <= 30;
            case 2:
                bool is_bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        
                if (is_bissexto) {
                    return dia >= 1 && dia <= 29;
                } else {
                    return dia >= 1 && dia <= 28;
                }
        }
    }

    return false;
}

bool Data::validarData(string data) 
{
    int dia, mes, ano;
    Data::separarNumeros(data, dia, mes, ano);

    return validarData(dia, mes, ano);

}

string Data::adicionarZero(int numero)
{
    string numero_string = to_string(numero);

    if (numero < 10) {
        numero_string = "0" + numero_string;
    }

    return numero_string;
}


string Data::converterParaTextoExtenso()
{
    string dia_str = adicionarZero(this->dia);
    string mes_str = adicionarZero(this->mes);
    string mes_extenso = ( mes_str == "01" ? "janeiro" : 
                        mes_str == "02" ? "fevereiro" :
                        mes_str == "03" ? "março" :
                        mes_str == "04" ? "abril" :
                        mes_str == "05" ? "maio" :
                        mes_str == "06" ? "junho" :
                        mes_str == "07" ? "julho" :
                        mes_str == "08" ? "agosto" :
                        mes_str == "09" ? "setembro" :
                        mes_str == "10" ? "outubro" :
                        mes_str == "11" ? "novembro" :
                        "dezembro" );
    string ano_str = to_string(this->ano);

    return dia_str + " de " + mes_extenso + " de " + ano_str;
}

string Data::converterParaString()
{
    return adicionarZero(this->dia) + "/" + adicionarZero(this->mes) + "/" + to_string(this->ano);
}


int main (void)
{
    int dia, mes, ano;
    string teste1 = "5/5/2003";
    string teste2 = "15/12";
    string teste3 = "23/4/2";

    cout << Data::validarData(15, 12, 2003) << endl;
    cout << Data::validarData(teste1) << endl;
    cout << Data::validarData(teste2) << endl;
    cout << Data::validarData(teste3) << endl;
    Data::separarNumeros(teste1, dia, mes, ano);
    Data data = {dia, mes, ano};
    cout << data.converterParaTextoExtenso() << endl;
    cout << data.converterParaString();
}