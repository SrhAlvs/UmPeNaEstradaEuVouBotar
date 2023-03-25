#include <stdio.h>
#include <locale.h> //inclusão de bibliotecas
int main ()
{
	setlocale (LC_ALL, "Portuguese"); //escolhendo linguagem
	 //final do cabeçalho
	
	float num1ou2, num1, num2, num3, aba, vol; //iniciando variáveis
	num1ou2, num1, num2, num3, aba, vol = 0; //garantindo valor inicial das variáveis
	printf ("Para calcular a área da base e o volume de um prisma quadrangular, digite 1. Para calcular a área da base e o volume de um prisma triangular, digite 2."); //mostrar na tela
	scanf ("%f", &num1ou2); //receber do usuário
	if (num1ou2 == 1){ //se sim
	 printf ("Digite em metros, a largura do prisma:"); //mostrar na tela
	 scanf ("%f", &num1); //receber do usuário
	 printf ("Digite em metros, a profundidade do prisma:"); //mostrar na tela
	 scanf ("%f", &num2); //receber do usuário
	 printf ("Digite em metros, a altura do prisma:"); //mostrar na tela
	 scanf ("%f", &num3); //receber do usuário
	 aba = num1 * num2; //cálculo
	 vol = aba * num3; //cálculo
	 printf ("A área da base do prisma quadrangular em m² é %f", aba); //mostrar na tela
	 printf ("\nO volume do prisma quadrangular em m³ é %f", vol); //mostrar na tela
	}
	else{ //se não
	 if (num1ou2 == 2){ //se sim
	  printf ("Digite em metros, o tamanho da base do triângulo:"); //mostrar na tela
	  scanf ("%f", &num1); //receber do usuário
	  printf ("Digite em metros, a distância da base até o vértice do triângulo:"); //mostrar na tela
	  scanf ("%f", &num2); //receber do usuário
	  printf ("Digite em metros, a altura do prisma:"); //mostrar na tela
	  scanf ("%f", &num3); //receber do usuário
	  aba = (num1 * num2)/2; //cálculo
	  vol = aba * num3; //cálculo
	  printf ("A área da base do prisma triangular em m² é %f", aba); //mostrar na tela
	  printf ("\nO volume do prisma triangular em m³ é %f", vol); //mostrar na tela
     }
     else{ //se não
     printf ("Você não escolheu nenhuma opção."); //mostrar na tela
	 }
	}
} //final
