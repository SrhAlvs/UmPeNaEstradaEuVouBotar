#include <stdio.h> 
#include <conio.h>
#include <locale.h>       //inclusão de bibliotecas de comandos
int main () {	
	setlocale(LC_ALL, "Portuguese");     //escolhendo a linguagem 
	//final do cabeçalho 
	
	float Resultado, grau; //iniciando as variáveis
	int alternativa ;
	Resultado,grau=0;	//garantindo valor inicial da variável
	alternativa=0 ;
	
	printf("Esse programa faz a conversão de temperatura . .");// mostrar na tela
	printf("Digite 1 - Celsius para Fahreinheit, digite 2 - Fahreinheit para Celsius, digite 3 - Celsius para Kelvin, digite 4 - Kelvin para Celsius."); // mostrar na tela
	scanf("%d",&alternativa);// recebendo variável
	
	switch(alternativa){
	 	case 1:
	 		printf("\nInsira o valor em graus Celsius: ");// mostrar na tela
	 		scanf("%f",&grau); // recebendo variável
	 		
			Resultado = (grau * 9/5) + 32 ; // cálculo de Celsius para Fahreinheit
	 		printf("\nO valor em  Fahreinheit é :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	case 2:
	 		printf("\nInsira o valor em Fahreinheit: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo variável
	 		
			Resultado= (grau  - 32) * 5/9 ;// cálculo fahreinheit para Celsius
	 		printf("\nO valor em  Celsius é %0.2f",Resultado);//mostrar na tela
	 		break;
	 	case 3:
	 		printf("\nInsira o valor em Celsius: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo variável
	 		
			Resultado= grau+273,15 ; // cálculo de Celsius para Kelvin
	 		printf("\nO valor em  Kelvin é :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	case 4:
	 		printf("Insira o valor  em Kelvin: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo variável
	 		
			Resultado= grau- 273,15 ;// calculo de Kelvin para Celsius
	 		printf("\nO valor em  Kelvin é :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	default:
	 		printf("Nenhuma das opções foi escolhida.");// mostrar na tela 
	}
} //fim
