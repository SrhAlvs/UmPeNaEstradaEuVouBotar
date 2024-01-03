#include <stdio.h>
#include <locale.h> 	//inclusão de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabeçalho
	float Escolha; 	//iniciando variáveis
	float PInicial1;
	float Vel; 
	float ITemp1;
	float PInicial2; 
	float VInicial; 
	float ITemp2;
	float Acel; 
	Escolha,PInicial1,Vel,ITemp1,PInicial2,VInicial,ITemp2,Acel=0; 	//garantindo valoe inicial da variável
	printf ("Este programa possibilita a escolha entre os cálculos de movimento uniforme ou movimento uniforme variado, recebe as informações necessárias para o cálculo e disponibiliza a fórmula pronta e preenchida para resolver e obter a posição final."); 	//mostrar na tela
	printf ("\nDigite 1 para selecionar o cáculo do movimento uniforme ou 2 para o cálculo do movimento uniforme variado:"); 	//mostrar na tela
    scanf ("%f",&Escolha); 	//receber do usuário
    if (Escolha==1){ 	//se sim:
     printf ("\nInsira a posição inicial em metros:"); 	//mostrar na tela
     scanf ("%f",&PInicial1); 	//receber do usuário
     printf ("\nInsira a velocidade do corpo em metros por segundo:"); 	//mostrar na tela
     scanf ("%f",&Vel); 	//receber do usuário
     printf ("\nInsira o intervalo de tempo em segundos:"); 	//mostrar na tela
     scanf ("%f",&ITemp1); 	//receber do usuário
     printf ("\nO cálculo a ser feito é: %f", PInicial1); 	//mostrar na tela
     printf (" + %f", Vel); 	//mostrar na tela
     printf (" * %f", ITemp1); 	//mostrar na tela
	}
	else{
	 if (Escolha==2){ 	//se sim:
	  printf ("\nInsira a posição inicial em metros:"); 	//mostrar na tela
	  scanf ("%f",&PInicial2); 	//receber do usuário 
	  printf ("\nInsira a velocidade inicial em metros por segundo:"); 	//mostrar na tela
      scanf ("%f",&VInicial); 	//receber do usuário
      printf ("\nInsira o intervalo de tempo em segundos:"); 	//mostrar na tela
      scanf ("%f",&ITemp2); 	//receber do usuário
      printf ("\nInsira a aceleração do corpo em metros por segundo:"); 	//mostrar na tela
      scanf ("%f",&Acel); 	//receber do usuário
      printf ("\nO cálculo a ser feito é: %f", PInicial2); 	//mostrar na tela
      printf (" + %f", VInicial); 	//mostrar na tela
      printf (" * %f", ITemp2); 	//mostrar na tela
      printf (" + ( %f", Acel); 	//mostrar na tela 
      printf (" * %f", ITemp2); 	//mostrar na tela 
      printf ("^2 ) / 2"); 	//mostrar na tela
	}
	else{ 	//se não:
	  printf ("\nNenhuma opção foi selecionada."); 	//mostrar na tela
	}}
} 	//fim
