programa {
 //Portugol Studio
 //Portugol Webstudio: https://portugol.dev/
  funcao inicio() {
    inteiro num, i, soma
    num = 0
    i = 1
    soma = 0

    enquanto(i <= 5) {
      escreva("Digite um valor: ")
      leia (num)
      soma = soma + num
      i = i + 1
    }

    escreva("A soma é: ", soma)
  }
}
