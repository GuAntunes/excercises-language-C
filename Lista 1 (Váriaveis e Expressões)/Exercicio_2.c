#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*2. Pec¸a ao usu´ ario para digitar tr ˆes valores inteiros e imprima a soma deles.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num1,num2,num3;
	
	printf("Digite um primeiro valor: ");
	scanf("%d",&num1);
	
	printf("Digite um segundo valor: ");
	scanf("%d",&num2);
	
	printf("Digite um terceiro valor: ");
	scanf("%d",&num3);
	
	printf("\n\nA soma dos três valores é: %d\n\n",num1+num2+num3);	
	
	

	system("pause");
	return 0;
}

