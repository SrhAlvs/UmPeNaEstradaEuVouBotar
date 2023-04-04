#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas de comandos
int main ()
{
	setlocale (LC_ALL, "Portuguese"); //escolhendo linguagem
		//final do cabeçalho
	float Num1, Num2, Num3, Num4, Num5, Num6, Med, Area; //iniciando variáveis
	Num1, Num2, Num3, Num4, Num5, Num6, Med, Area = 0; //garantindo valor inicial da variável
	printf ("Este programa recebe 6 valores, tira a média entre os 4 primeiros e calcula a área de um triângulo retângulo com os 2 últimos valores."); //mostrar na tela
	printf ("Insira o primeiro número:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usuário
	printf ("Insira o segundo número:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usuário
	printf ("Insira o terceiro número:"); //mostrar na tela
	scanf ("%f",&Num3); //receber do usuário
	printf ("Insira o quarto número:"); //mostrar na tela
	scanf ("%f",&Num4); //receber do usuário
	printf ("Insira o quinto número:"); //mostrar na tela
	scanf ("%f",&Num5); //receber do usuário
	printf ("Insira o sexto número:"); //mostrar na tela
	scanf ("%f",&Num6); //receber do usuário
	Med=((Num1+Num2+Num3+Num4)/4); //cálculo da média
	Area=((Num5*Num6)/2); //cálculo da área do triângulo retângulo
	printf ("O resultado da média entre os primeiros 4 valores é: %f", Med); //mostrar na tela
	printf ("O resultado da área do triângulo retângulo em centímetros quadrados é: %f", Area); //mostrar na tela
} //fim
