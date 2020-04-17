#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Ler uma temperatura em graus Celsius e apresent´ a-la convertida em graus Fahrenheit.
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float ce, fa;
	
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f",&ce);
	
	fa = ce * (9/5) + 32;	
	
	printf("\n\n%.2fº Celsius é igua á %.2fº fahrenheit",ce,fa);
	

	getch();
	return 0;
}

