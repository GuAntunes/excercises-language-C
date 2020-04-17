#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i, vetor[50], cont;
	
	for(cont=0;cont<50;cont++){
		i = cont;
		vetor[cont] = (i + 5 * i) % (i + 1); 
	}
	
	for(cont=0;cont<50;cont++){
		printf("%d ",vetor[cont]);
	}
	
	
	
	

	getch();
	return 0;
}

