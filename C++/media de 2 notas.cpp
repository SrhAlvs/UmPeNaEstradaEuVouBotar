#include <stdio.h>
#include <locale.h>  //inclusão de bibliotecas
int main()
{
	setlocale (LC_ALL, "Portuguese");  //escolhendo linguagem
	  //final do cabeçalho
    float Num1;  //iniciando as variáveis
    float Num2;
    float Media; 
    Num1, Num2, Media= 0;  //garantindo valor inicial da variável
    printf ("Esse programa calcula a média entre duas notas\n"); //mostrar na tela
	printf ("Insira a primeira nota:");  //mostrar na tela
	scanf ("%f", &Num1);  //receber do usuário
	printf ("Insira a segunda nota:");  //mostrar na tela
	scanf ("%f", &Num2);  //receber do usuário 
	Media = (Num1 + Num2)/2;  //cálculo
	printf ("O resultado da média é: %f", Media);  //mostrar na tela
	if (Media>6 || Media==6){  //se sim:
		printf ("\nAluno aprovado\n"); 
	}
	else{  //se não:
		printf ("\nAluno reprovado");
	}
} //fim
