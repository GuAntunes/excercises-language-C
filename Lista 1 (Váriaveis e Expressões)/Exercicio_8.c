#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//8. Leia um n�umero inteiro e imprima o seu antecessor e o seu sucessor.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	system("cls");
	
	printf("O antecessor desse n�mero � %d",num-1);
	printf("\nO sucessor desse n�mero � %d",num+1);
	
	

	getch();
	return 0;
}

