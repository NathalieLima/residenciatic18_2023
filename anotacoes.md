string é arrays de caracteres

char[50] cabem 49, pq preicsamos de 1 pro \0

podemos percorrer strng

### codigo

- em c++ simboliza que ta acessando o espaço de outro
faz uma verificaçao a mais, oq torna um pouco mais lento, e a preocupaçao do C é ser rapido, entao permite mais erros

### classe string (c++)

tipo string. n é uma variável primária, é uma classe
a diferençade uma classe pra primario é que é um componente mt mais poddinilifses, como validar entradas e saidas; aramzenar tamanho da string, calcular tamanho dela

- chamar serviço, oq previne operaçoes ilegais e menos acesso à etrutura interna - menos chance de infringir a consistenica

- encapsulamento

ideia da classe é ter atributos encapsulados,  atributos sao variaveis

### string x vetor de caracteres

esse é mais elaborado, eu garanto funçoes pra ele. e pra entrar c ddoas nessa string n faço isso diretamente, faço atraves dos metodos. funçoes q pertencem a essa classe p trabalhar c as variaveis/atributos dessa classe

classe sring n dxaria eu tentar gravar dps do espaço reservado pra ela, enquanto que a outra deixaria


nome1 retorna o objeto da string, transforma no conteudo.
ja posso fzr atribuiçao direta
nome3 = "CIclano"; n preciso fzr for, embora ele faça internamente

### namespace

é um espaço q eu reservo pra colocar dentro dle. colocar funçoes implementadas
como se eu criasse uma area de codigo, e dentro dele coloco oq eu quero.
no inicio n havia isso

vantagem: 


### namespace

- recurso = dado (variavel) ou funçao
- usar c cuidado

### manipulaçao strngs

- entrada de dados: getline ou cin
cin.getline tb xiste
- saída: cout

### atribuiçao de strings

nome1 - nome2;
sao endereços de memoria
- classe string implementa operadores
-= atribuiçao
    aceita constantes e variaveis

qnd 

### acessando caracteres

- at()
- nivel de abstraçao + alto, como tá implementada n interessa pra mim
string texto("oi"); 
texto = "ola mundo";

string tem o tamanho q eu preciso

### operaçoes e contextos

- sobrecarga; como que vai se comportar

cout é um objeto q trata isso

### concatenando strings

### 

faz interno





VECTOR

- conceito
- encapsulamnto de um array

int *a;
a = malloc(10 * sizeof(int));

a[0] = 5;
a++;
a[0] = 10;


a ----> [ 5  ]

ponteiro é endereço de memoria

a=b é c ponteiros

### classe vector

construtor é funçao especial usada pra definir valor inicial de qlqr objeto
td vez q eu criar ojbeto da classe ele vai chamar esse construtor
n sabemos oq faz, mas basicamente é p armazenamento; é uma questao interna

embora fique + rapido, em compensaçao tenho outros problemas

### inserindo dados

- push_back
- .size() p tamanho do vetor

### algumas funçoes

- at() é um metodo sobrecarregado: mesma coisa c obetivos semelantes
- localiza elemento numa determinada posiçao
- limitado ao tamanho do vetor  .size

## ITERATORS

outra classe, usada junto c os vectors. sao objetos usados pra percorrer coleçoes

índice i dentro do array

### criando objeto iterator

vec.begin é um iterator, entao auto it vai receber um iterator
- .begin retorna ponteiro pro primeiro elemento

### advance()

posicionar pra frente e pra trás
-> lista encadeada

### distance()

n tenho como fzr vec.begin e perder ponteiro

### manipulaçao dados vectors

- maniulaçao
- inserir
- excluir
- alterar

### funções

- insert(t, v)
- erase(it)
- *x = -1

- iterator implicito
-> for it