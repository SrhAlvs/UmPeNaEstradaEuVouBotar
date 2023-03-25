#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); //escolhendo a linguagem
		//final do cabeçalho
	 float Num1, Num2, Num3, Med, AreaT; //iniciando variáveis
	 Num1, Num2, Num3, Med, AreaT=0; //garantindo valor inicial da variável
	 printf ("Este programa recebe 3 valores, tira a média entre os dois primeiros e calcula a área de um triângulo com os dois últimos."); //mostrar na tela
	 printf ("Insira o primeiro número:"); //mostrar na tela 
	 scanf ("%f",&Num1); //receber do usuário
	 printf ("Insira o segundo número:"); //mostrar na tela 
	 scanf ("%f",&Num2); //receber do usuário
	 printf ("Insira o terceiro número:"); //mostrar na tela 
	 scanf ("%f",&Num3); //receber do usuário
	 Med = (Num1 + Num2)/2; //cáculo da média
	 AreaT = (Num2 * Num3)/2; //cáculo da área do triângulo 
	 printf ("O resultado da média é: %f", Med); //mostrar na tela
	 printf (". O resultado da área do triângulo em centímetros quadrados é: %f", AreaT); //mostrar na tela 
} //fim
