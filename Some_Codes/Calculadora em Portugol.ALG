algoritmo "Calculadora"
var
   operacao, repete: caractere
   num1, num2, resultado: real
inicio
  repita
   escreval ("Bem vindo � esta calculadora, primeiro digite qual ser� a opera��o a ser realizada, preste aten��o nos sinais � seguir:")
   escreval ("Digite + para somar.")
   escreval ("Digite - para subtrair.")
   escreval ("Digite * para multiplicar.")
   escreval ("Digite / para dividir.")
   escreval ("Digite \ para obter a parte inteira de uma divis�o.")
   escreval ("Digite % para obter o resto de uma divis�o.")
   escreval ("Digite ^ para exponenciar.")
   escreval ("Digite RAIZ para selecionar a raiz quadrada.")
   escreval ("Digite SEN para calcular o seno em radianos.")
   escreval ("Digite COS para calcular o cosseno em radianos.")
   escreval ("Digite TAN para calcular a tangente em radianos.")
   leia (operacao)
   escolha operacao
      caso "RAIZ"
           escreva ("Digite um n�mero para calcular a raiz quadrada: ")
           leia (num1)
           resultado <- RaizQ (num1)
           escreval ("A raiz de ", num1, " � ", resultado, ".")
      caso "SEN"
           escreva ("Digite um n�mero para calcular o seno: ")
           leia (num1)
           resultado <- Sen (num1)
           escreval ("O seno de ", num1, " � ", resultado, ".")
      caso "COS"
           escreva ("Digite um n�mero para calcular o cosseno: ")
           leia (num1)
           resultado <- Cos (num1)
           escreval ("O cosseno de ", num1, " � ", resultado, ".")
      caso "TAN"
           escreva ("Digite um n�mero para calcular a tangente: ")
           leia (num1)
           resultado <- Tan (num1)
           escreval ("A tangente de ", num1, " � ", resultado, ".")
      caso "+", "-", "*", "/", "\", "%", "^"
           escreva ("Digite o primeiro n�mero: ")
           leia (num1)
           escreva ("Digite o segundo n�mero: ")
           leia (num2)
      outrocaso
           escreval ("Nenhuma opera��o foi selecionada.")
   fimescolha
   escolha operacao
      caso "+"
           resultado <- num1 + num2
           escreval ("O resultado da soma entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "-"
           resultado <- num1 - num2
           escreval ("O resultado da subtra��o entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "*"
           resultado <- num1 * num2
           escreval ("O resultado da multiplica��o entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "/"
           resultado <- num1 / num2
           escreval ("O resultado da divis�o entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "\"
           resultado <- num1 \ num2
           escreval ("O resultado da parte inteira da divis�o entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "%"
           resultado <- num1 % num2
           escreval ("O resultado do resto da divis�o entre ", num1, " e ", num2, " � ", resultado, ".")
      caso "^"
           resultado <- num1 ^ num2
           escreval ("O resultado da exponencia��o entre ", num1, " e ", num2, " � ", resultado, ".")
   fimescolha
   escreval ("Deseja realizar outra opera��o? [sim/n�o]")
   leia (repete)
   limpatela
  ate (repete = "n�o")
fimalgoritmo