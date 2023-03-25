#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas de comandos
int main ()
{
	setlocale(LC_ALL, "portuguese"); //escolhendo linguagem
		//final do cabeçalho
	float Num1, Num2, Total1, Total2; //iniciando as variáveis
	Num1, Num2, Total1, Total2 = 0; //garantindo valor inicial da variáveis
	printf ("Este programa soma dois números e subtrai o primeiro número do segundo número."); //mostrar na tela
	printf ("Insira o primeiro número:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usuário
	printf ("Insira o segundo número:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usuário
	Total1 = Num1+Num2; //cálculo de soma
	Total2 = Num2-Num1; //cálculo de subtrção
	printf ("O resultado da soma do primeiro número com o segundo é %f ",Total1); //mostrar na tela
	printf ("O resultado da subtração do primeiro número no segundo é %f ",Total2); //mostrar na tela
} //fim
