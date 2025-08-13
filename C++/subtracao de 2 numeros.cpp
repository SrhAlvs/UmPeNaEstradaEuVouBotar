#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas de comandos
int main () {
	setlocale(LC_ALL, "portuguese"); //escolhendo linguagem
	//final do cabeçalho

	float Num1, Num2, Total; //iniciando as variáveis
	Num1, Num2, Total = 0; //garantindo valor inicial das variáveis

	printf ("Este programa faz a subtração entre dois números."); //mostrar na tela
	printf ("Insira o primeiro número:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usuário
	
	printf ("Insira o segundo número:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usuário
	
	Total = Num1-Num2; //cáculo da subtração
	printf ("A subtração entre os números é %f",Total); //mostrar na tela
} //fim
