/* Crie uma classe de lista genérica que use templates para armazenar elementos
de qualquer tipo. Implemente métodos para adicionar, remover e listar elementos
da lista. Use a classe de lista para armazenar diferentes tipos de dados, como
inteiros, strings e números de ponto flutuante */

#include <iostream>
#include <vector>

using namespace std;

template <typename T> class ListaGenerica
{
    private:
        vector<T> valores;
        T inicial;

        int getIndiceElemento(T _valor) 
        {
            for (int i = 0; i < valores.size(); i++) {
                if (_valor == valores[i]) {
                    return i;
                }
            }

            return -1;
        }
    
    public:
        ListaGenerica(T parametro) {
            inicial = parametro;
        };

        void adicionarElemento(T _valor) 
        {
            valores.push_back(_valor);
        }
        void removerElemento(T _valor) 
        {
            int indice = getIndiceElemento(_valor);
            
            valores.erase(indice);
        }

        void listarElementos() 
        {
            cout << "Itens da lista: \n";

            for (T valor: valores) {
                cout << valor << endl;
            }
        };
};

void montarMenu(vector<string>, unsigned int);

int main (void)
{
    int opcao_usuario;
    vector<string> opcoes {"Adicionar elemento", "Excluir elemento", "Listar todos os elementos"};
    auto elemento = 0;
    ListaGenerica lista(0);

    do {
        montarMenu(opcoes, opcoes.size());
        cout << "Escolha uma opção: "; cin >> opcao_usuario;

        switch (opcao_usuario) 
        {
            case 1:
                cout << "Elemento: "; cin >> elemento;

                lista.adicionarElemento(elemento);
                break;

            case 2:

            case 3:
                lista.listarElementos();
                break;

            default:
                break;



        }
    } while (opcao_usuario != 0);


    return 0;
};

void montarMenu(vector<string> opcoes, unsigned int qtde)
{
    for (unsigned int i = 0; i < qtde; i++) {
        cout << "[" << i+1 << "] " << opcoes[i] << "\n";
    }

    cout << endl;
}