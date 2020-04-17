#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int A[6] = {1, 0, 5, -2, -5, 7};
	int var,cont;
	
	var = A[0] + A[5] + A[1];
	printf("Soma dos valores: %d",var);
	
	A[3] = 100;	
	
	for(cont=0;cont<6;cont++){
		printf("\n%d",A[cont]);
	}

	getch();
	return 0;
}

