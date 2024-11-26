programa
 //Portugol Studio
 //Portugol Webstudio: https://portugol.dev/
{
	
	funcao inicio()
	{
		//poderia ter declarado todas as variáveis de uma vez aqui
		//real num1, num2, soma, subt, mult, divi
		escreva("Este programa realiza as 4 operações elementares com 2 números de sua preferência. \nDigite o primeiro número: ")
		real num1
		leia(num1)
		
		escreva("\nDigite o segundo número: ")
		real num2
		leia(num2)
		
		real soma
		real subt
		real mult
		real divi
		
		soma = num1 + num2
		subt = num1 - num2
		mult = num1 * num2
		divi = num1 / num2

		escreva("\nOs resultados são: ")
		escreva("\n- Soma: ", soma)
		escreva("\n- Subtração: ", subt)
		escreva("\n- Multiplicação: ", mult)
		escreva("\n- Divisão: ", divi)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 27; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */