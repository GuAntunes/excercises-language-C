#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Ler um conjunto de n´umeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos t ˆem
10 elementos cada. Imprimir todos os conjuntos.*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float num[10],num2[10];
	int cont;
	
	for(cont=0;cont<10;cont++){
		printf("\nDigite o número desejado: ");
		scanf("%f",&num[cont]);
		num2[cont] = pow(num[cont],2);
	}	
	
	for(cont=0;cont<10;cont++){
		printf("%.2f ",num[cont]);
	}
	printf("\n\n");
	for(cont=0;cont<10;cont++){
		printf("%.2f ",num2[cont]);
	}

	getch();
	return 0;
}

