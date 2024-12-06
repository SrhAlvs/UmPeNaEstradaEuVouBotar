programa
 //Portugol Studio
 //Portugol Webstudio: https://portugol.dev/
{

   funcao inicio(){

       /* Criando as variaveis */
       real meuDinheiro
       real troco
       real precoPaoUnidade
       logico compraChocolate

       /* Atribuindo os valores iniciais das variaveis, no caso temos 10 reais e por enquanto não podemos comprar o chocolate, afinal não sabemos se teremos o troco  */
       meuDinheiro = 10.0
       compraChocolate = falso

       /* Realizando as operações  */
       escreva ("Informe o valor do pão: ")
       leia(precoPaoUnidade)
       troco = meuDinheiro - (10*precoPaoUnidade)

       se (troco > 0) {
           compraChocolate = verdadeiro
           escreva ("Você pode comprar um chocolate!")
       } senao {
          escreva ("Você não pode comprar um chocolate!")
       }
   }
}

