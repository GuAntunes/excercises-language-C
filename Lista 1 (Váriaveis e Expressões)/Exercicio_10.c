#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua ´area.*/


int main()
{
	setlocale(LC_ALL,"portuguese");

	int num;
	
	printf("Digite o lado do quadrado: ");
	scanf("%d",&num);
	
	printf("\n\nA área deste quadrado é: %d",num*num);	
	
	
	

	getch();
	return 0;
}

