#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ ˜ao que receba estas
2 vari ´aveis e troque o seu conte´udo, ou seja, esta func¸ ˜ao ´e chamada passando duas
vari ´aveis A e B por exemplo e, ap´os a execuc¸ ˜ao da func¸ ˜ao, A conter´a o valor de B e B
ter ´a o valor de A.*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int A, B;

	printf("Digite um valor para a váriavel A: ");
	scanf("%d",&A);
	printf("\nDigite um valor para a váriavel B: ");
	scanf("%d",&B);
	
	troca(A,B);

	getch();
	return 0;
}

void troca(int *pa,int *pb)
{
	int aux;
	aux = *pa;
	*pa = *pb;
	pb = aux;
	printf("Valor da váriavel A: %d - Valor da váriavel B: %d",*pa,*pb);
}
