#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

float valor=780000.0;

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	
	printf("A quantia a ser recebida pelo primeiro ganhador é de: %f",valor*.46);
	printf("\n\nA quantia a ser recebida pelo segundo ganhador é de: %f",valor*.32);
	printf("\n\nA quantia a ser recebida pelo terceiro ganhador é de: %f",valor*.22);
	

	getch();
	return 0;
}

