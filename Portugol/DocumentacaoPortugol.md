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
* **para(inteiro i = 0; i < x; i++)** = para um inteiro i = 0, condição (adicione i++, enquanto i for menor que x), aí ele repete a cada nova adição no i (incremento no i)
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
## Vetores e matrizes 
Começam a contar a partir do zero.
### Vetores 
Permite que sejam armazenados mais de um valor (do mesmo tipo) em uma mesma variável.
* **tipoDeVariavel nomeVariavel[x]** = x é o tamanho do vetor
    ```
    cadeia nomes[3] = {"Pedro", "Augusto", "Jorge"}
        //0 = Pedro
        //1 = Augusto
        //2 = Jorge
    para(inteiro i = 0; i < 3; i++){
        escreva(nomes[i]) 
            //estrutura para escrever cada um dos nomes
            //apesar de ter 3 nomes, as posições começam a contar a partir do 0, por isso i < 3
    }
    ```
### Matrizes
* **tipoDeVariavel nomeVariavel[x][y]** = x é a quantidade de linhas, y é a quantidade de colunas
    ```
    inteiro num[2][3] = {{1, 2, 3}, {4, 5, 6}}
    escreva(num[0][2]) 
        //linha 0, coluna 2 = 3
    ```
## Funções
* **funcao nomeFuncao(){}** = conjunto de comandos que podem ser executados nas n vezes que forem chamados (independente da quantidade de vezes), são declaradas/escritas fora da `funcao inicio (){}`
    * nos () coloca as variáveis: (inteiro a, cadeia nome)
    * nas {} coloca os comandos
    ```
    programa{
        funcao soma(inteiro a, inteiro b){
            inteiro result = a + b
            escreva("O resultado é: ", result)
        }
        funcao inicio (){
            inteiro num1 = 6
            soma(6, num1)
                //a = 6
                //b = num1 = 6
        }
    }
    //O resultado é: 12
    ```
* **retorne()** = comando utilizado dentro das funções, serve para poder "utilizar o valor da função do jeito que quiser". No exemplo acima, a função `soma()` sempre vai somar dois valores e escrever a mesma frase. Mas se a gente só quer o resultado, a frase se torna inútil. Então poderíamos reescrever o exemplo anterior da seguinte maneira:
    ```
    programa{
        funcao inteiro soma(inteiro a, inteiro b){
            retorne(a+b)
        }
        funcao inicio (){
            inteiro num1 = 6
            inteiro resultado
            resultado = soma(6, num1)
                //a = 6
                //b = num1 = 6
            escreva(resultado)
        }
    }
    //12
    ```
    * **Funções com retorno** devem conter o tipo de variável a ser retornada antes do nome da função. Exemplo: `funcao inteiro soma(){}`.
    ### Parâmetros
    * **funcao nomeFuncao(inteiro &a){}** = veja o exemplo a seguir:
        ```
        programa{
            funcao soma(inteiro a){
                a++
            }
            funcao inicio (){
                inteiro x = 0
                soma(x)
                escreva(x)
                soma(x)
                escreva(x)
                soma(x)
                escreva(x)
            }
        } //000
        ```
        ```
        programa{
            funcao soma(inteiro &a){
                a++
            }
            funcao inicio (){
                inteiro x = 0
                soma(x)
                escreva(x)
                soma(x)
                escreva(x)
                soma(x)
                escreva(x)
            }
        } //123
        ```
        * No Exemplo 1, foi passado somente o valor de x, que é 0, apesar de ter os trechos `a++`, isso só vale para a variável `a` contida dentro da função.
        * Quando adicionamos o `&`, passamos a variável x por inteiro, e não somente o seu valor. Então toda alteração na variável `a` será atualizada na variável `x` também.