#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*5. Efetue a leitura de tr ˆes valores e apresente como resultado a soma dos quadrados dos
tr ˆes valores lidos.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float num1,num2,num3, soma;
	
	printf("Digite um primeiro valor: ");
	scanf("%f",&num1);
	
	printf("Digite um segundo valor: ");
	scanf("%f",&num2);
	
	printf("Digite um terceiro valor: ");
	scanf("%f",&num3);
	
	system("cls");
	
	soma=pow(num1,2)+pow(num2,2)+pow(num3,2);
	
	printf("A soma do quadrado dos três números digitados: %f",soma);	
	
	getch();
	return 0;
}

