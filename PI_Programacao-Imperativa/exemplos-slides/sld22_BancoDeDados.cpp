#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class BancoDeDados 
{
    public:
        static void salvarDados(vector<string> dados)
        {
            ofstream arquivo_saida("./exemplo.txt");

            if (arquivo_saida.is_open()) 
            {
                for (unsigned int i = 0; i < dados.size(); i++) {
                    arquivo_saida << "Escrevendo no arquivo." << dados[i]+"1" << endl;
                }
                
                arquivo_saida.close();
            } else {
                cout << "Erro ao abrir o arquivo." << endl;
            }
        }

        static vector<string> recuperarDados()
        {
            vector<string> dados;
            ifstream arquivo_entrada;
            arquivo_entrada.open("exemplo.txt", ios_base::in);

            if (arquivo_entrada.is_open())
            {
                string linha;
                

                while (arquivo_entrada.eof() == false) {
                    getline(arquivo_entrada, linha);
                    dados.push_back(linha);
                }

                arquivo_entrada.close();

                //return arquivo_entrada;
            } else {
                cout << "Erro ao abrir o arquivo." << endl;
            }

            return dados;
        }
};

int main (void)
{
    vector<string> compras_mes = {"maçã", "pera", "uva", "melancia"};
    
    //BancoDeDados::salvarDados(compras_mes);
    vector<string> ola = BancoDeDados::recuperarDados();
    cout << ola[1];
    

}