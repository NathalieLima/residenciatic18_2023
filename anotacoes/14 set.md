# SLIDE 14

criar com sructs e funçoes coisas semelhantes a classes e objetos

### modularizaçao de codigo

facilita manutençao desd q seja bem feito; n posso criar efeito colateral dentro de uma funçao q n tem nd a ver c a historia

qm vai tratar o erro, a msg, deve ser feita fora, pq pode abbrir margem pra uma GUI; senao cria um efeito colateral

### TDAs

pilhas, filas, listas vinculadas, arvores, grafos; tipos estruturados

pilha: primeiro a entrar é o ultimo a sair
quem chegou primeiro é atendido primeiro
cada dado aponta pro prox ado, os nós. e cada nó tem um dado ou informaçao dentro

vetor posso acessar elemento diretamete, ex: quero sbr qm é o 10, passo diretamente o indice
ja na lista vc percorre todos os elementos ate chegar ao q quiser
em principio encontrar algo na lista é mais lento, mas rpra inserir/deletar é + rapido

lista ncadeada pra representar pilha é excelente, embora possa representar c vetor.

-> ordenaçao

- importancia de se usar a estrutura correta, pq isso pode prejudica mt o sistema


arvore binaria: esquerdo e dieito apontando pra um endereço. se n tiver, aponta pra null
sempre que for menor, incluo do lado squerdo; maior, direito
desbalancear, rebalancear
é mt rapio chegar a um determinado elemento, enquanto que numa lista encadeada seria mt ruim

- lista duplamente encadeada

### combinando structs e funçoes

- podemos combinar strcts e funçoes p criar programas organizados

- data -> dia (alocar dinamicamente) == data.dia (alocar estaticamente)
se vier de ponteiro, entao é ->
qnd passo *data, passo por referencia

eu coloco a msg de erro q eu quiser, nao a funçao

inicializar c default

- um programa bem estruturado pode ser mt bom, sem apresentar erro, mas podemos melhorar c OOP

dados e funçoes tq vao trabalhar c esses dados estao interligadas. qnd movo as funçoes, vou mover os dados. ja na PE, as funçoes podem ate ser reutilizaveis, mas tenho  dados espalhados e expostos* pelos programas
- na herança n preciso reprogramar, só programar oq ta diferente

*

### complxidade 

- - atributos sao as variaveis, q n consigo acessar, apnas usando os metodos criados; e essas funçoes garantem a integridade dos meus dados
- setters e getters pra todos os atributos
validar s isbn é valido, passando codigo de erro e tal. aí qm trata isso é seu programa


- tentar diminuir interdependencia, oq vimos em coesao e acoplamento

- um programa estruturado e bem feito n é ruim, mas OOP é + utilizado mundialmente. e ainda temos o funcional

### colabraçao devs

cada classe pode ser desenvolvida independentemente
- em principio consigo juntar alteraes numa mesma classe, desde q n tenham se sobrescrito

