programa {
 //Portugol Studio
 //Portugol Webstudio: https://portugol.dev/
  funcao inicio() {
    //Declarando variáveis
    real num1, num2

    escreva("Informe um valor: ")
    leia(num1)

    escreva("\nInforme um segundo valor diferente do primeiro: ")
    leia(num2)

    se (num1 > num2) {
      escreva("\n", num1, " é maior que ", num2, ".")
    } senao se (num1 == num2) {
      escreva("\nOs valores não podem ser iguais. ")
    } senao {
      escreva("\n", num2, " é maior que ", num1, ".")
    }
  }
}
