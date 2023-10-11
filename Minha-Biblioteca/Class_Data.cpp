/* pendencias: como seria validação de dia/mes/ano nos metodos set; valor minimo pra ano */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;

class Data 
{
    private:
        int dia, mes, ano;
        string formato;

    public:
        /* MÉTODOS CONSTRUTORES */

        Data() {
            dia = 1;
            mes = 1;
            ano = 1900;
        }

        Data(int dia = 1, int mes = 1, int ano = pegarDataAtual().getAno()) {
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        /* PROTÓTIPOS DOS MÉTODOS */
        
        void setDia(int);
        void setMes(int);
        void setAno(int);
        int getDia();
        int getMes();
        int getAno();
        int operator-(const Data&);                                     // Sobrecarga do operador - para criar diferença entre datas
        string adicionarZero(int);                                      // Adicionar zero a uma string númerica caso seja < 10
        string converterParaTextoExtenso();                             // Converter uma data em texto extenso
        string converterParaString();                                   // Converter para o formato de string (ex: 15/12/2003)
        static Data pegarDataAtual();                                   // Pegar a data atual do sistema
        static void separarNumeros(string, int &, int &, int &);        // Receber data como string e devolver cada número a uma variável inteira
        static bool isDataValida(int, int, int);                        // Verificar se a data fornecida é válida
        static bool isDataValida(string);                               // Sobrecarga da função, recebendo como parâmetro uma string e convertendo para inteiro
        static bool isBissexto(int);                                    // Verificar se certo ano é bissexto
        static int calcularDiferencaDias(Data, Data);                   // Calcular a diferença de dias entre datas                
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

/* MÉTODOS DA CLASSE */

void Data::setAno(int ano) {
    this->ano = ano;
}

int Data::operator-(const Data& outro) 
        {
            
            int diff_anos = (this->ano - outro.ano) * 365;
            float diff_meses = (this->mes - outro.mes) * ( (isBissexto(this->ano) ? 366.0 : 365.0) / 12.0 );
            int diff_dias = this->dia - outro.dia;

            return round(diff_dias + diff_meses + diff_anos);
        }

int Data::calcularDiferencaDias(Data data1, Data data2)
{
    return data1 - data2;
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

Data Data::pegarDataAtual() 
{
    // obter a data e hora atual
    std::time_t tempo_atual = std::time(nullptr);

    // converter o tempo atual para uma estrutura de tm (tempo)
    std::tm *data_hora = std::localtime(&tempo_atual);

    // acessar os componentes de data e hora
    int ano = data_hora->tm_year + 1900;        // Ano atual
    int mes = data_hora->tm_mon + 1;            // Mês atual (0-11)
    int dia = data_hora->tm_mday;               // Dia atual

    Data data = {dia, mes, ano};

    return data;
}

void Data::separarNumeros(string data, int &dia, int &mes, int &ano)
{
    istringstream iss(data);
    string numeros_data[3] = {"01", 
                              "01", 
                               to_string(pegarDataAtual().getAno())};
    string substring;
    int i = 0;
    
    while (getline(iss, substring, '/')) {
        numeros_data[i] = substring;
        i++;
    }

    dia = stoi(numeros_data[0]);
    mes = stoi(numeros_data[1]);
    ano = stoi(numeros_data[2]);
} 
    
bool Data::isDataValida(int dia, int mes, int ano)
{    
    // pegar diferença de dias da data atual do sistema para a fornecida. se menor que 0, data não existe
    int diferenca_dias = calcularDiferencaDias(pegarDataAtual(), {dia, mes, ano});

    // validações
    if ( ano >= 0 && diferenca_dias >= 0 && mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return dia >= 1 && dia <= 31;
            case 4: case 6: case 9: case 11:
                return dia >= 1 && dia <= 30;
            case 2:
                if (isBissexto(ano)) {
                    return dia >= 1 && dia <= 29;
                } else {
                    return dia >= 1 && dia <= 28;
                }
        }
    }

    return false;
}

bool Data::isDataValida(string data) 
{
    int dia, mes, ano;

    Data::separarNumeros(data, dia, mes, ano);

    return isDataValida(dia, mes, ano);
}

string Data::adicionarZero(int numero)
{
    string numero_string = to_string(numero);

    if (numero < 10) {
        numero_string = "0" + numero_string;
    }

    return numero_string;
}

bool Data::isBissexto(int ano) 
{
    return ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0);
}

/* FUNÇÃO PRINCIPAL SOMENTE PARA FINS DE TESTE */

int main (void)
{
    int dia, mes, ano;
    Data data_atual = Data::pegarDataAtual();
    vector<string> elementos = {"5/5/2003", "15/12", "23/4/2", "10/10/2023"}; 

    cout << "Validade data inteira: " << Data::isDataValida(15, 12, 2003) << endl;

    for (unsigned int i = 0; i < elementos.size(); i++)
    {
        cout << "É data válida: " << Data::isDataValida(elementos[i]) << endl;

        Data::separarNumeros(elementos[i], dia, mes, ano);
        Data data = {dia, mes, ano};

        cout << "Texto extenso: " << data.converterParaTextoExtenso() << endl;
        cout << "Para string: " << data.converterParaString() << endl;
        cout << "Diferença de dias pra data atual: " << Data::calcularDiferencaDias(data_atual, data) << endl;
        cout << endl;
    }
}