# Lógica de Programação: começando a desenvolver seus primeiros programas | IFRS
## Comandos
* **escreva** = mostra na tela
* **leia** = recebe o valor de uma variável (já declarada anteriormente)
## Variáveis
* **inteiro** = números inteiros, ué
* **real** = números inteiros, aqueles quebrados ou não exatos
* **logico** = verdadeiro ou falso
* **cadeia** = letra ou palavras
* **caracter** = caracteres (?:;-=)
## Operadores 
### Operadores relacionais
* **=** = igual para atribuir valor
* **==** = igual para comparar valores
* **>** = maior que
* **<** = menor que
* **>=** = maior ou igual a
* **<=** = menor ou igual a 
* **+=** = 
* **-=** =
#### Incrementos
* **variavel++** = adiciona +1
* **variavel--** = subtrai -1
### Operadores lógicos
Supondo que x = verdadeiro e y = falso
* **e** = x `e` y //falso
* **ou** = x `ou` y //verdadeiro
* **nao** = `nao` x //falso, nega/troca o valor da variável
## Desvio condicional
* **se () {}** = se (algo for verdade) {algo acontece}
* **senao se () {}** = se (falso) {nada acontece} senao se (algo for verdade) {algo acontece}
* **senao () {}** = se (falso) {nada acontece} senao se (falso) {nada acontece} senao {algo acontece, quando todos os outros são falsos}
    ```
    se (condicao) {
        //apenas 1 `se`
    } senao se (condicao) { 
        //podem ter inúmeros `senao se`
    } senao { //se tudo é falso, esse é o último recurso
        //apenas 1 `senao`
    }
    ```
## Laços de repetição
* **para(inteiro i = 0; i<x; i++)** = para um inteiro i = 0, condição (adicione i++, enquanto i for menor que x), aí ele repete a cada nova adição no i (incremento no i)
    * Sim, tem que declarar a variável dentro do loop, ou não, é só colocar o `;` sem declarar nada
* **enquanto (condição) {}** = enquanto a condição for verdade, executa os comandos dentro dos {}, é mais indicado para quando não se sabe quantas vezes o loop tem que repetir
    ```
    inteiro i = 0
    enquanto (i < 5) {
        escreva("Hello world!")
    } //se parar aqui vira um loop infinito, já que 0 sempre vai ser menor que 5, então:

    inteiro i = 0
    enquanto (i < 5) {
        escreva("Hello world!")
        i = i + 1
        // ou: i++
    }
    ```
* **faca {} enquanto (condição)** = faça {alguma coisa} enquanto (a condição for verdade, i < x)
    ```
    inteiro i
    faca {
        escreva ("Hello world!")
        i = i + 1
    } enquanto (i <= 10)
    ```