#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class Transacao
{
    private:
        string data,
               descricao;
        double valor_transacao;
        int tipo_transacao;

    public:
        void setData(string _data) {
            this->data = _data; 
        }

        void setValorTransacao(double _valor_transacao) {
            this->valor_transacao = _valor_transacao; 
        }

        void setDescricao(string _descricao) {
            this->descricao = _descricao; 
        }

        string getData() {
            return this->data; 
        }

        double getValorTransacao() {
            return this->valor_transacao; 
        }

        string getDescricao() {
            return this->descricao; 
        }
};

class Conta
{
    public:
        static std::string num_conta;
        std::string nome;
        double saldo;
        vector<Transacao> transacoes;
    public:
        static int contador;
        

        Conta() {
            contador++;
            srand(time(0));

            //this->num_conta = to_string(contador + rand() % 2355153);
        }

        //virtual double set

        void depositar(double _valor) {
            this->saldo += _valor;
        };

        void setNumConta(string _num_conta) {
            this->num_conta = _num_conta; 
        }

        string getNumConta() {
            return this->num_conta; 
        }


        void setNome(string _nome) {
            this->nome = _nome; 
        }

        string getNome() {
            return this->nome; 
        }

        double getSaldo() {
            return this->saldo; 
        }
        void retirar();
        void imprimirExtrato();


};

class CorrenteComum : Conta
{

};

class CorrenteLimite : Conta
{
    double limite;
};

class Poupanca : Conta
{
    private:
        int dia_aniversario;
};



int Conta::contador = 0;

void exibirOpcoesMenu()
{
    cout << 
    "[1] Criar Conta \n" <<
    "[2] Exibir dados da conta \n"
    "[3] Depósito \n" <<
    "[4] Retirada \n";

}

int main (void)
{
    int opcao_usuario;
    Conta conta;
    Transacao transacao;
    string nome;


    do {
        exibirOpcoesMenu();
        cout << "Opção: "; cin >> opcao_usuario;

        switch (opcao_usuario)
        {
            case 0:
                break;

            case 1:
                cout << "Nome: "; cin >> nome;
                conta.setNome(nome);
                break;

            case 2:
                cout << "Número da conta: " << conta.getNumConta() << setw(16)
                    << "Nome da conta: " << conta.getNome() << setw(16)
                    << "Número da conta: " << conta.getNumConta() << setw(16);

            default:
                cout << "Aviso: Insira entre 1 e 8" << endl;
                break;
            
            
        }

    } while (opcao_usuario != 0);
}




