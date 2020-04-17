#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//9. Leia um n´umero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
//seu dobro.


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int numero,soma;
	
	printf("Digite o número desejado: ");
	scanf("%d",&numero);
	
	soma=((numero*3)+1)+((numero*2)-1);
	
	printf("\n\nRESULTADO: %d",soma);
	
	

	getch();
	return 0;
}

