// atribuiçao, n vai ter set/get
// qnd receber atribuiçao, vai add ao int
// e a soma dos int, 2 + 2 é n + m + 1

#include <iostream>

using namespace std;

class MeuInt {
    private:
        int valor;
    
    public:
        MeuInt() {
            valor = 0;
        }

        MeuInt (int _valor) {
            valor = _valor;
        }

        int getInt () {
            return valor;
        }

        void operator=(int _valor) {
            this->valor = _valor;
        }

        MeuInt operator+(MeuInt _valor) 
        {
            return valor + _valor.getInt() + 1;
        }
};

int main (void) {
    
    MeuInt inteiro1 = 5;
    MeuInt inteiro2 = 10;
    MeuInt soma = inteiro1 + inteiro2;

    cout << "A soma de " << inteiro1.getInt() << " e " << inteiro2.getInt() << " é: " << soma.getInt() << endl;
    

    return 0;
}