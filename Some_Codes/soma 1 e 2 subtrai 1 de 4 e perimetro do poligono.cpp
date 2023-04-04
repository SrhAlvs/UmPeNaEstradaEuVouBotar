#include <stdio.h>
#include <locale.h>  //inclusão de bibliotecas
int main ()
{
	setlocale (LC_ALL, "Portuguese");  //escolhendo linguagem
		//fim do cabeçalho
	float abc1;  //iniciando as variáveis 
	float abc2; 
	float abc3; 
	float abc4; 
	float Adic; 
	float Subt; 
	float Peri;
	abc1, abc2, abc3, abc4, Adic, Subt, Peri = 0; //garantindo valor inicial das variáveis
	printf ("Este programa recebe quatro valores, onde ele soma os dois primeiros; subtrai o primeiro do último e calcula o perímetro de um polígono.");  //mostrar na tela
	printf ("\nInsira o primeiro valor:");  //mostrar na tela
	scanf ("%f", &abc1);  //receber do usuário
	printf ("Insira o segundo valor:");  //mostrar na tela
	scanf ("%f", &abc2);  //receber do usuário
	printf ("Insira o terceiro valor:");  //mostrar na tela
	scanf ("%f", &abc3);  //receber do usuário
	printf ("Insira o quarto valor:");  //mostrar na tela
	scanf ("%f", &abc4);  //receber do usuário
	Adic = abc1 + abc2;  //cálculo
	Subt = abc1 - abc4;  //cálculo
	Peri = abc1 + abc2 + abc3 + abc4;  //cálculo 
	printf ("A soma do primeiro valor com o segundo é %f", Adic);  //mostrar na tela
	printf ("\nA subtração entre o primeiro e o quarto valor é %f", Subt);  //mostrar na tela
	printf ("\nO perímetro do polígono é %f", Peri);  //mostrar na tela
}  //fim
