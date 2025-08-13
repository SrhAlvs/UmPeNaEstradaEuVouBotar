#include <stdio.h>
#include <locale.h>  //inclusão de bibliotecas
int main () {
	setlocale (LC_ALL, "Portuguese");  //escolhendo a linguagem
	//final do cabeçalho
	
	float Num1, Num2, Num3, Media;  //iniciando as variáveis 
	Num1, Num2, Num3, Media = 0;  //garantindo valor inicial da variável
	
	printf ("Este programa recebe três valores, calcula a média entre eles e ao final mostra a nota e diz se o aluno foi aprovado ou reprovado.");  //mostrar na tela
	printf ("Insira a primeira nota:");  //mostrar na tela
	scanf ("%f", &Num1);  //receber do usuário
	
	printf ("Insira a segunda nota:");  //mostrar na tela
	scanf ("%f", &Num2);  //receber do usuário
	
	printf ("Insira a terceira nota:");  //mostrar na tela
	scanf ("%f", &Num3);  //receber do usuário
	
	Media = (Num1+Num2+Num3)/3;  //cálculo da média
	if (Media>=6){  //se sim
		printf ("\nAluno aprovado. Nota: %f", Media); //mostrar na tela
	} else {  //se não
		printf ("\nAluno reprovado. Nota: %f", Media); //mostrar na tela
	}
}  //fim

