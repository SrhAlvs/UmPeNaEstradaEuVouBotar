#include <stdio.h>
#include <locale.h> 	//inclusão de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabeçalho
	float m1b1; 	//iniciando as variáveis
	float m1b2; 
	float m2b1; 
	float m2b2; 
	float Media1; 
	float Media2; 
	m1b1,m1b2,m2b1,m2b2,Media1,Media2=0; 	//garantindo valor inicial da variável
	printf ("Este programa calcula a média de duas matérias por dois bimestres e ao final diz se foi aprovado ou não. Insira a nota de 0 a 10 do primeiro bimestre da primeira matéria:"); 	//mostrar na tela
	scanf ("%f",&m1b1); 	//receber do usuário
	printf ("Insira a nota de 0 a 10 do segundo bimestre da primeira matéria:"); 	//mostrar na tela
	scanf ("%f",&m1b2); 	//receber do usuário
	printf ("Insira a nota de 0 a 10 do primeiro bimestre da segunda matéria:"); 	//mostrar na tela
	scanf ("%f",&m2b1); 	//receber do usuário
	printf ("Insira a nota de 0 a 10 do segundo bimestre da segunda matéria:"); 	//mostrar na tela
	scanf ("%f",&m2b2); 	//receber do usuário
	if (m1b1<=10){ 	//se sim:
	if (m1b1>=0){ 	//se sim:
	 if (m1b2<=10){ 	//se sim:
	 if (m1b2>=0){ 	//se sim:
	  if (m2b1<=10){ 	//se sim:
	  if (m2b1>=0){ 	//se sim:
	   if (m2b2<=10){ 	//se sim:
	   if (m2b2>=0){ 	//se sim:
	 Media1 = (m1b1 + m1b2)/2; 	//cálculo
	 Media2 = (m2b1 + m2b2)/2; 	//cálculo
 	 printf ("Na primeira matéria a média foi de %f", Media1); 	//mostrar na tela
	 printf ("\nNa segunda matéria a média foi de %f", Media2); 	//mostrar na tela
	  if (Media1>=6){ 	//se sim:
	  printf ("\nAprovado na primeira matéria."); 	//mostrar na tela
	 }
	  else { 	//se não:
	  printf ("\nReprovado na primeira matéria."); 	//mostrar na tela
	 }
	  if (Media2>=6){ 	//se sim:
	  printf ("\nAprovado na segunda matéria."); 	//mostrar na tela
	 }
	  else { 	//se não:
	  printf ("\nReprovado na segunda matéria."); 	//mostrar na tela
	 }
	 }}}}}}}}
	else { 	//se não:
	} 
} 	//fim
