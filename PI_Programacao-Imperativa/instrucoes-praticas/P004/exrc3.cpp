#include <iostream>
#include <limits>

using namespace std;

int main (void) 
{
    // a. identificar maior/menor valor de int e mostrar na tela
    
    cout << "--ETAPA A--" << endl;

    int smaller_value = numeric_limits<int>::min();
    int bigger_value = numeric_limits<int>::max();

    cout << "O menor valor para 'int' possível é " << smaller_value << ", enquanto que o maior é " << bigger_value << "." << endl;
    
    // b. criar variável de tipo unsigned long int, atribuir maior valor, identificar menor
    
    cout << "\n--ETAPA B--" << endl;

    unsigned long int uli = numeric_limits<unsigned long int>::max();
    cout << "O maior valor possível para 'unsigned long int' é: " << uli << 
    ", enquanto que o menor é " << numeric_limits<unsigned long int>::min() << endl;

    // c. criar variável li e atribuir de uli para li e de li para uli; fazer considerações
    
    cout << "\n--ETAPA C--" << endl;

    long int li = uli;
    uli = li;

    cout << "Unsigned long int: " << uli << "\nLong int: " << li << endl;

    /* Como o valor de li é o valor máximo possível para o tipo unsigned long int, que é um número positivo, o valor de uli será o mesmo que o valor de li. 
    Porém, quando uli é atribuído a li, o valor de uli é convertido para um tipo long int. Como o tipo long int é assinado (unsigned), 
    o valor de uli é convertido para o menor valor possível para o tipo. */

    // d. atribuir maior valor para li e identificar maior/menor 
    
    cout << "\n--ETAPA D--" << endl;
    
    li = numeric_limits<long int>::max();

    cout << "O menor valor para 'long int' possível é " << numeric_limits<long int>::min() << 
    ", enquanto que o maior é " << li << "." << endl;

    // e. criar variável ui e atribuir de li para li e de li para ui; fazer considerações
    
    cout << "\n--ETAPA E--" << endl;

    unsigned int ui = li;
    li = ui;

    cout << "Unsigned int: " << ui << "\nLong int: " << li << endl;

    /* O valor de um long int pode ser atribuído a um unsigned int sem conversão. 
    Já um unsigned int pode ser atribuído a um long int, porém esse valor é truncado para o valor máximo para o tipo long int. */

    // f. maior valor para long int; identificar maior/menor
    
    cout << "\n--ETAPA F--" << endl;

    ui = numeric_limits<unsigned int>::max();
    cout << "O maior valor possível para 'unsigned int' é: " << ui <<
    ", enquanto que o menor é " << numeric_limits<unsigned int>::min();
    

    return 0;
}