# PROGRAMAÇÃO ESTRUTURADA

- "go to": comando de desvio, q permitia ir p qlqr parte do codigo q quisesse. linguageens q eram numeradas de linha a linha, entao tinha um "go to 50", aí ; flexibilidade enorme, porem n é vantajoso
- go to existeem assembly, n tem while/for; por isso seu uso

- ALGOL, primeira. blocos estruturados podemos pensar em funçoes (faz desvio e volta dle, mas de outra forma)
- codigo + limpo, eficiente e manutenível; p sistemas + robustos

- ex em BASIC
- c++ tem go to tb
- depurar um codio c varias linhas e go to ficava mt complicado
- renum

### funções e procedimentos

criou-se pra programaçao estrutura funçoes e procedimentos
- modularizaçao e reutilização
- ambos encapsulam, mas tem propositos diffs

### procedimentos

- tem linguagens que tratam funçoes e procedimentos de formas diferentes, mas n é o caso do c e c++
- pra q servem parametro? entrar com dados, vc deveria fzr sempre passar por parametro, sem usar coisa global
- diff de procedimento pra funçao é que ele n tem retorno

- mostra_media

### funçoes

- retorna valor apos seu processamento

- calcula_media com return mostra_media

### parametros

- variavel local: ela só pexiste enquanto a funçao ta sendo executada. qnd sai do bloco, morre tudo
- podemos reutilizar o codigo. ao criar, pd depurar mt melhr, testar e sbr que o codigo ta certo
- funçao boa x funçao c qualidade
- + independente e + reutilizavel: + qualidade

- na hora da implementaçao blz mas depois n é reutilizavel
- faz uma copia, n é o proprio elemento. entao estou independente do escopo externo
- aí vira lixo e o espaço ta liberado

### utilizando funcoes

- horaAtual(); n passamos parametro, mas tb n utilizamos variavel global; pode ser usada em qlqr programa q eu queira, n tá dependente ali

### variavel global

- pdsr utilizado, mas n recomendavel; existe enquanto seu programa existir
- poderia criar alocaçao dinamica p ir matando tb
define é pré-compilaçao, n é executavel (#define TAM 10 antes da compilaçao, ele vai pegar como se fosse um editor de texto e onde encontrar TAM troca por 10); n vira codigo de maquina, 

- alguem pode alterar o valor
```
int main () { int x, y, z; }
```
embora n esteja global, tá local em todo o main;

### locais

- ajuda a evitar independencia indesejada; modular e legivel

### importante lembrar

- variaveis em funçao ajudam a entender melhor o contexto delas do q se estivessem globais

### parametros valor e referencia

- por valor recebe um copia
- por referencia altera o valor da variavel, como fzr em .js x = mudarValor(x)

### top-down

- cima pra baixo. ideia é quebrar complexo em problemas menores, + faceis de resolver. se n conseguir, quebrar ate conseguir resolver
- linha de montagem

- geralmente temos funçoes ou modulos pra tratar cada subproblema
ex:

-> descriçao do processo
- tem q ter preocupaçao q as entradas e saidas devem estar batendo, pra que quando sejam juntados os modulos, sejam compativeis

### bottom-up

- utilizada em operadores
- n começa quebrando, eu vou criar uma classe. e dentro dela faço ela atender ao max possivel, e vou criando pedaços de codigo. dps juntar isso tudo pra criar um programa
- tem vantagens e desvantagens. 
- topdown pensamos em todos os problemas daquele problema,n faço a mais do que o preciso; ja no bottom faço a mais pensando ; ao msm tmp tenho um projeto pra entregar e posso perder tempo em coisas desnecessarias, funçoes q ainda n uso

- orientaçao a testes: pensar teste antes de implementar a funçao
ex: o q acontece c numero grande, pequeno, caractere, num negativo
se perde um tmpo pensando, mas é compensado no futuro, p evitar depuraçoes e tal

### principais informacoes

- conceito de ocultaçao de informaçoes

- reedundancia vm de 

### modularizaçao

- se refere a qualidae de funçoes
- quanto que os modulos estao acoplados, ou seja, de modulos dificeis de serem retirados. ex: funçao soma com variabeis globais
- diz respeito à parte interna: tudo q tá dentro daquele modulo trabalha em prol de um objetivo, n fznd varias coisas n relacionadas

- grau de dependencia; baixo acoplamento: modulos independentes; interessante 'substituir sem afetar outros modulos

### tipos deacoplamento

- do pior ao melhor
- dados > imagem > controle > comum > conteudo

### coesao

funçao ser coesa. objetivo dela é trabalhar em prol de um resultado, e ela n deveria ter seus elementos agrupados só pq sao utilizados em razao de determinado tempo, pra fzr 2 ou 3 coisas distintas
- 1 unica tarefa; menor complexidade interna

-> tipos de coesao

qnd n pe funcional, fica ate dificil de dar o nome da funçao

- sequencial ainda é aceitavel

- comunicacinal: mesma entrada pra fzr coisas diffs

- coincidental

esses n dvem ser usados

-> arvore de dcisao

- acomplamento de imagem
devo passar os dados apenas necessarios pra funçao, n passar tudo









# TIPOS DE DADOS estruturados

- uma estrutura, struct
- qnd cç c++ struct era struct e classe era classe, hoje em dia eles j se misturam mais

- armazenar 

### plain old desvantagens

- struct
- no final vai ficar parecido c class

### union

- nunca pra uso simultaneo

-> e pros espaços de memoria posteriores?

### estruturas e registros

- registro ruim?

### typedef

- aumenta legibilidade, compreensao do sistemas
typedef double money;

-> alias: "Alias quer dizer “pseudônimo”, “apelido” e, em computação, é um comando que permite substituir uma palavra por outras ou por uma cadeia de caracteres."

- ele permanece sendo double, entao pode somar double com money

-> ponteiro com funçao e uso com typedef

### using

- outra forma de renomear; using é poderoso p outras coisas tambem
using MeuInteiro = int;

-> muitas formas diferentes de chegar o mesmo resultado


### prototipo da funçao

vou usar aquela funçao criada de soma

int main ()
{

}

ele vai compilando e transformando em linguagem de maquina. ele n conhece a funçao soma, n tem como sbr o espaço reservado na memoria etc., vai dar erro de compilaçao. precisa explicar qm é esse cara antes de usar, a n ser que pegássemos soma e declarasse antes 

int soma (int, int);

importante é sbr os espaços q vai ter q dxar e o q tá retornando

linqueditou
.h, .cpp a ideiae q eu n faça esse soma dentro do meu programa, e sim em otro arquivo; um q eu vá colocar na minha biblioteca

ele n vai conhecer

no funcMat.h vou criar os protótipos

como criei na minha pasta, n na biblioteca padrao, eu uso #include "funcMat.h";

funcMat.cpp = tenho minhas funçoes aritmeticas; aqui dou include de funcMat.h
funcMat.h = prototipos e/ou variaveis

linquediçao é juntar varios programas: coisas q tao em linguagem de maquina e juntar no seu codigo
todos sao .obj: em linguagem de maquina, mas n executavel
.exe: juntei todos os obj e criei um executavel

- DLL

se eu colocar como dll tenho bibliotecas dinamicas, ntao sabe o tamanho q precisa guardar p fzr linquediçao. na hora de chamar intmai, vou procurar na dll e carrega ela pra memoria principal. qnd n tá usando e precisa de memoria, descarta aquela memoria e usa pra outra coisa
aí ele carrega dinamicamente. se tem memoria sobrando, ele deixa, senao ele vai pegar e fazer swap
o programa fica menor, 

include pega o texto que ta num programa e joga onde foi incluído


resumindo: prototipo da funçao serve pra informar ao compilador, entao é bom smp colocar no inicio
