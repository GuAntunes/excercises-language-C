#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float salario,desconto;
	
	printf("Digite o valor da compra: ");
	scanf("%f",&salario);
	
	system("cls");
	
	desconto=salario-(salario*0.1);
	printf("Total a pagar com desconto de 10%: %.2f",desconto);
	printf("\nO valor da parcela, de 3 x sem juros: %.2f",salario/3);
	printf("\nA comissão do vendedor, no caso da venda ser a vista: %.2f",desconto*0.05);
	printf("\na comissão do vendedor, no caso da venda ser parcelada: %.2f",salario*0.05);
	
	getch();
	return 0;
}

