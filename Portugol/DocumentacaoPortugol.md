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