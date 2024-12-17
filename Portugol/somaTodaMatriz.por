programa {
  //Portugol Studio
  //Portugol Webstudio: https://portugol.dev/
  funcao inicio(){
    real matriz[5][5]
    para(inteiro i = 0; i < 5; i++){
      para(inteiro j = 0; j < 5; j++){
        escreva("Insira o valor da posição [", (i+1), "][", (j+1), "]: ")
        leia(matriz[i][j])
      }
    }
    escreva("A soma de todos os elementos da matriz é: ", somaMatriz(matriz))
  }
  funcao real somaMatriz(real mat[][]){
    real soma = 0
    para(inteiro i = 0; i < 5; i++){
      para(inteiro j = 0; j < 5; j++){
        soma = soma + mat[i][j]
      }
    }
    retorne soma
  }
}