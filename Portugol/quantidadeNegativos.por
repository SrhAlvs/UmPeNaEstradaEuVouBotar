programa {
 //Portugol Studio
 //Portugol Webstudio: https://portugol.dev/
  funcao inicio() {
    inteiro i, analise
    real num
    num = 0
    i = 1
    analise = 0

    enquanto (i <= 10) {
      escreva("Digite um valor: ")
      leia(num)
      se(num < 0) {
        analise++
      }
      i++
    }
    se(analise > 1) {
      escreva(analise, " números são negativos.")
    } senao se (analise == 1) {
      escreva(analise, " número é negativo.")
    } senao {
      escreva("Nenhum número é negativo.")
    }
        
  }
}
