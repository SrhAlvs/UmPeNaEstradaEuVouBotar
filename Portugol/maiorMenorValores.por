programa {
  //Portugol Studio
  //Portugol Webstudio: https://portugol.dev/
  funcao maiorMenor (inteiro num[]){
      inteiro maior = num[0]
      inteiro menor = num[0]
      para(inteiro n=1; n<5; n++){
          se(num[n] > maior){
              maior = num[n]
          }
          se(num[n] < menor){
              menor = num[n]
          }
      }
      escreva("Maior número: ", maior, "\n")
      escreva("Menor número: ", menor, "\n")
  }
  funcao inicio(){
      inteiro num[5]
      para(inteiro n=0; n<5; n++){
        escreva("Insira um valor: ")
        leia(num[n])
      }
      maiorMenor(num)
  }
  
}