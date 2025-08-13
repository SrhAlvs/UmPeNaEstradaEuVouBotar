#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas de comandos
int main () {
	setlocale(LC_ALL, "Portuguese"); //escolhendo linguagem
	//final do cabeçalho
	
	float Num1, ACir, AQua; //iniciando variáveis
	Num1, ACir, AQua = 0; //garantindo valor inicial das variáveis
	
	printf ("Este programa calcula a área de um quadrado e a área de uma circunferência, sendo que o raio e a aresta do quadrado possuem o mesmo valor."); //mostrar na tela
	printf ("Insira o valor do raio ou da aresta do quadrado em centímetros:"); //mostrar na tela
	scanf ("%f", &Num1); //receber do usuário
	
	ACir = (3,14*Num1*Num1); //cálculo da área da circunferência
	AQua = (Num1*Num1); //cálculo da área do quadrado
	printf ("O valor da área da circunferência é : %f" , ACir); //mostrar na tela
	printf ("O valor da área do quadrado é : %f" , AQua); //mostrar na tela
} //fim
