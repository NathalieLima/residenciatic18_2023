nome fica armazenado o endereço de memoria

int vet[20] = alocar espaço; reservar espaõ que ngm mais pd usar alem de vet, teooricamente
começo do primeiro bit

um inteiro ocupa 4 bytes, entao em um vetor de 20, ele precisa de 80 bytes pra representá-lo

vet++ = se tava no endereço 5, vai pro 9. aí vai dxar de apontar pro primeiro cara e aponta pro segundo. eu n deveria fzr isso pq vou perder o endereço do primeiro, aí n vou sbr onde começa e onde acaba

endereço que tá ali e soma a qtd de bytes 
"anda 2 * 4, 1 * 4, n * 4)

c++ te conversao automatica de tipos


- n incorpora verificaçao de indcs: uma das maiores causas de erro, entao volta meio tem estouro de vetor sem querer ou propositalmente (injeçao de codigo; consegue crashar programa, entrar no SO e fzr oq quiser -- C permite flexibilidade e performance)


- int n[5] = {}
se n colocar, inicializadores vao tar c 0


n preciso colocar numero dele ali se inicializar


toda string termina com \0. entao num vetor de caracterres n posso colocar "leia ate encontrar \0"

- sizof

foram determinadas classes que podem substituir o nosso array. classe vetor é uma implementação melhorada do array, tendo metodos, funçoes, mas qnd criaram c++ manteram arry pra ter compatibilidade

-> n há atribuiçao de arrays
eles podem apontar pro mesm lugar,mas vc n pode atribuir um array a outro
ex: vet1 = vet2
pra atribuir, preciso copiar individualmente ou fazer um aço de repetiçao

c++ n fornece um tipo de string como tipo de dado básico; mas vc tem esse tipo

string = conjunto de caracteres + caractere nulo '\0'

-> literais x constantes

o caractere nulo conta na contagem da qtd de elementos no array


cin é um objeto e como objeto tem implementado metodos. getline vc passa a variavel e vc passa o tamanho da linha que tá lendo, aqui vc pode colocar espaço; no cin normal ele entende espaço como contrabarrazero e corta

-> lista encadeada: alocar dinamicamente


### funçoes

- fazendo atribuiçao
- strcat: concatenar
- strcomp: comparar 2 strings. retorna -1, 0 e 1; tamanho da soma dos elementos
- strlen: cmprimento da string que antecede \0

### arrays multidimensionais

- mais de um indice
- matriz
- representar tabelas de valores do msm tipo geralmente
- linhas e colunas

float n[5][3]
int a[4][4]
char ch[10][5]

posso ter indefinidas dmensoes, dpende da sua maauinaaa


### agrc, agrv

argc nome do programa (ja conta como pam); qtd de argumentos passados
argv arrray com esses dados



#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    // verificações
    /*if (argc < 4) 
    {
        cout << "Insira 4 argumentos.";
    }
    else if (!isdigit(atoi(argv[2])) || !isdigit(atoi(argv[3]))) 
    {
        cout << "Insira um número válido.";
    }

    cout << isdigit(atoi(argv[2]));*/

    if (argc == 4) 
    {
        string operation = argv[1];

        if (operation == "int")
        {
            int resultado = atoi(argv[2]) / atoi(argv[3]);
            cout << "Resultado dessa operação entre inteiros é " << resultado << endl;
        }
        else
        {
            double resultado = atof(argv[2]) / atof(argv[3]);
            cout << "Resultado dessa operação entre pontos flutuantes é " << resultado << endl;
        }
    }


    return 0;
}