algoritmo "Calculadora"
var
   operacao, repete: caractere
   num1, num2, resultado: real
inicio
  repita
   escreval ("Bem vindo à esta calculadora, primeiro digite qual será a operação a ser realizada, preste atenção nos sinais a seguir:")
   escreval ("Digite + para somar.")
   escreval ("Digite - para subtrair.")
   escreval ("Digite * para multiplicar.")
   escreval ("Digite / para dividir.")
   escreval ("Digite \ para obter a parte inteira de uma divisão.")
   escreval ("Digite % para obter o resto de uma divisão.")
   escreval ("Digite ^ para exponenciar.")
   escreval ("Digite RAIZ para selecionar a raiz quadrada.")
   escreval ("Digite SEN para calcular o seno em radianos.")
   escreval ("Digite COS para calcular o cosseno em radianos.")
   escreval ("Digite TAN para calcular a tangente em radianos.")
   leia (operacao)
   escolha operacao
      caso "RAIZ"
           escreva ("Digite um número para calcular a raiz quadrada: ")
           leia (num1)
           resultado <- RaizQ (num1)
           escreval ("A raiz de ", num1, " é ", resultado, ".")
      caso "SEN"
           escreva ("Digite um número para calcular o seno: ")
           leia (num1)
           resultado <- Sen (num1)
           escreval ("O seno de ", num1, " é ", resultado, ".")
      caso "COS"
           escreva ("Digite um número para calcular o cosseno: ")
           leia (num1)
           resultado <- Cos (num1)
           escreval ("O cosseno de ", num1, " é ", resultado, ".")
      caso "TAN"
           escreva ("Digite um número para calcular a tangente: ")
           leia (num1)
           resultado <- Tan (num1)
           escreval ("A tangente de ", num1, " é ", resultado, ".")
      caso "+", "-", "*", "/", "\", "%", "^"
           escreva ("Digite o primeiro número: ")
           leia (num1)
           escreva ("Digite o segundo número: ")
           leia (num2)
      outrocaso
           escreval ("Nenhuma operação foi selecionada.")
   fimescolha
   escolha operacao
      caso "+"
           resultado <- num1 + num2
           escreval ("O resultado da soma entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "-"
           resultado <- num1 - num2
           escreval ("O resultado da subtração entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "*"
           resultado <- num1 * num2
           escreval ("O resultado da multiplicação entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "/"
           resultado <- num1 / num2
           escreval ("O resultado da divisão entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "\"
           resultado <- num1 \ num2
           escreval ("O resultado da parte inteira da divisão entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "%"
           resultado <- num1 % num2
           escreval ("O resultado do resto da divisão entre ", num1, " e ", num2, " é ", resultado, ".")
      caso "^"
           resultado <- num1 ^ num2
           escreval ("O resultado da exponenciação entre ", num1, " e ", num2, " é ", resultado, ".")
   fimescolha
   escreval ("Deseja realizar outra operação? [sim/não]")
   leia (repete)
   limpatela
  ate (repete = "não")
fimalgoritmo