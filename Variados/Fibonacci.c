#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int inicio, quantidade, a=0, b=1,cont=0;
	
	printf("Digite a quantidade de números que deseja saber: ");
	scanf("%d",&quantidade);
	printf("Digite o número que deseja iniar a sequencia: ");
	scanf("%d",&inicio);
	
	while(cont<quantidade){
		b = a + b;
		a = b - a;
		
		if (b >= inicio){
			printf("%d ",b);
			cont++;
		}
	}	
	
	

	getch();
	return 0;
}

