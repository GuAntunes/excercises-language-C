#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*4. Leia um n�umero real e imprima a quinta parte deste n�umero.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float num;
	
	printf("Digite um n�mero: ");
	scanf("%f",&num);
	
	printf("A quinta parte desse n�mero �: %.1f",num/5);
	
	
	

	getch();
	return 0;
}

