podemos ter metodos e atributos qque pertencem a classe mas n a cada objeto

pertencem a classe = vc n instancia
ao objeto = tem que instanciar p usar

isso sao metodos estatiscos

n dependem do estado de uma instancia especifica da classe, mas pertencem à classe como um todo

### sintaxe

static void meuMetodoEstatisco

minhaClasse::meuMetodoEstaatico()

- atributo classe x 

quando instancio, cada instancia passa a ter seus atributos; e quando ta na classe, ele pertence a todo mundo como se fosse variavel global, todos podem acessá-lo

os metodos estaticos n têm acesso a this, ja que n operam nessas instancias da classe

chamados através de ::

### caracteristicas

- virtual
- funçoes utilitarias, metodos de fabrica

-> metodo virtual

-> interface no java

ex: static int contador;
pertence à classe, n ao objeto

precisam ter static

### situaçoes recomendadas

- funçoes utilitarias: agrupar funçoes dentro de um espaço
n precisam de estado de instancia

aí tu pode retornar o valor como parametro ou por retorno msm

- evitar retorno colaterla, como calcular e printar; pq pra um problema ela pode atender, mas pra outros nn

// contagem de instancias

- rastrear informaçoes sobre todas as instancias da classe
ex: single town, só ter 1 instancia. aí posso criar esse contador pra verificar se já nn existe instancia criada
"crie um ponteiro pra ele. se n, crie um novo"

util pra contador global

// testar inicializando

### funcionalidades compartilhadas

- implementar funcionalidades que vao ser compartilhadas por todas as instancias. ex: sistema de cache, funçoes de log etc. varios objetos acesasndo msm tipo de informaçao

### facilidade de uso

n ter q criar 

## consideraçoes

- tem que usar com cuiddado, pode dificultar manutençao e teste de codigo
- se n tem necessidade de instanciar, aí vai pro estático

n tem relaçao entre elas, entao coesao ruim. entao quando eu quero somar, tenho que levar todos os outros codigos. e tb quando precisar dar manutençao em 1, posso criar efeito colateral nos outros


o metodo estatico n pode acessar uma variavel que n seja estatica
pq senao seria atributo do objeto

# SLIDE 22

criar nossas classes de forma persistente, pra n ter que redigitar tudo

- fstream

stream é um fluxo de dados, e aí podemos direcionar ela pra um arquivo, pra um monitor etc. então tenho um fluxo que vou direcionar pra algum lugar
c e c++ veem um monitor ou uma impressora ou um arquivo como mesma coisa

jogo pra uma stream, e se tiver direcionada pra um arquivo, aí vai pra um arquivo

i = input, fluxo de entrada; leitura
o = fluxo de saída; escrita
fstream = tanto entrada quanto saída

### o que é abrir/fechar arquivo

pego um ponteiro, verifico se o arquivo existe. se eu conseguir abrir, vou ter um ponteiro apontando pro inicio ou pro final; ou pra começar a ler ou pra começar a escrever

quando aponto, eu criei objeto da classe e depois
tenho 2 construtores diferentes

abrir arquivp ra escrita: vou poder escrever dentro dele. é aberto pra write
-> ver default

- close: pra que preciso fechar.
resposta: pra não corromper
corromper: vamos supor que salvemos no hd. o que faz ser lento é que é mecanico (eletrico bem mais rapido), entao o C n faz isso. quando manda salvar no arquivo, ele diz salvar, mas joga stream; e quando ela tiver tamanho X, descarrega no disco. faz uma operaçao só de armazenar em vez de salvar tiquinho a tiquinho

tenho variaveis de sistema, posso definir tamanho desse disco
se eu tenho programa e n fecho, o pedacinho n levado ao disco vai ficar corrompido, pq n fechamos direito. fechar to informando a ele que acabou

-> buffer eh jogar coisa no disco?

### leitura de arquivos

-getline(): lê de linha em mim
- >>
- read: read e write posso pegar objeto da classe e salvar ele inteiro
-> armazenar objeto inteiro. n posso ler esse arquivo

- armazenar modo texto x armazenar modo binario

-> bits e bytes
em motodo texto e ler em modo binario. dos 8 leio 4 e vou transformar. os outros
binarui sakvar 4 bytes de um double
como texto armazeno o valor daquele cara na tabela ascii
-> por isso tem que saber a tabela a ser armazenada (ascii, unicod0e)

### escrita

- <<
- write()

### outras funçoes (metodos)

- eof - end of file
- só n vai abrir se n existir

controle de entrada ja manipula o ponteiro nesse while (seekg vai direto pra linha que eu quero)

- trabalhar de forma dinamica
sizeof, saber tamanho de cara um, sizeof 10, quando eu pegar dda=dos, já pego valor pra mim

se n usar o is_open, pode dar pau

incluir biblioteca fstream

- tags inventadas pro meu texto
quando programa ler, ele

word n passava seu formato, e aí n dava pra usar em arquivo de texto