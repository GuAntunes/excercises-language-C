#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Fa�a um programa que ent�ao leia uma string e a imprima.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char texto[50];
	
	printf("Digite uma frase: ");
	scanf("%50[^\n]",texto);
	
	printf("\n\nVoc� digitou: %s",texto);
	
	

	getch();
	return 0;
}

