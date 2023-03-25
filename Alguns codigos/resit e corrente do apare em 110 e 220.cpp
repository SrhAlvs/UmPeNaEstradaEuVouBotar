#include <stdio.h>
#include <locale.h> 	//inclusão de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabeçalho
	float Potencia; 	//iniciando variáveis 
	float Corrente1; 	
	float Corrente2; 	
	float Resistencia1; 
	float Resistencia2; 	
	Potencia,Corrente1,Corrente2,Resistencia1,Resistencia2=0; 	//garantindo valor inicial da variável
	printf ("Este programa calcula e mostra a resistência e a corrente de um aparelho se ligado em 110 ou 220 Volts. Insira a potência do aparelho:"); 	//mostrar na tela
	scanf ("%f", &Potencia); 	//receber do usuário
	Corrente1 = Potencia/110; 	//cálculo
	Corrente2 = Potencia/220; 	//cálculo
	Resistencia1 = 110/Corrente1; 	//cálculo
	Resistencia2 = 220/Corrente2; 	//cálculo
	printf ("A corrente do aparelho quando ligada em 110 Volts é igual a %f", Corrente1); 	//mostrar na tela 
	printf (" Ampere e sua resistência é igual a %f", Resistencia1); 	//mostrar na tela 
	printf (" Ohm."); 	//mostrar na tela
	printf ("\nA corrente do aparelho quando ligada em 220 Volts é igual a %f", Corrente2); 	//mostrar na tela
	printf (" Ampere e sua resistência é igual a %f", Resistencia2); 	//mostrar na tela
	printf (" Ohm.");
} 	//fim
