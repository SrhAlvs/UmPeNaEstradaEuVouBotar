programa {
  //Portugol Studio
  //Portugol Webstudio: https://portugol.dev/
  funcao inteiro posiNega (inteiro a){
    se(a > 0){
      retorne 1 //número positivo = 1
    } senao {
      retorne 0 //número negativo = 0
    }
  }
  funcao inicio() {
    inteiro num
    escreva("Informe um número: ")
    leia(num)
    escreva(posiNega(num))
  }
}