#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char mercadoria[30];
	int cont;
	float desconto,valor_total;
	
	printf("Digite o nome da mercadoria: ");
	scanf("%30[^\n]",mercadoria);	
	
	printf("\nDigite o valor total da mercadoria: ");
	scanf("%f",&valor_total);
	
	desconto = valor_total * 0.10;
	
	system("cls");

	printf("Mercadoria: %s",mercadoria);
	printf("\nValor Total: R$%.2f",valor_total);
	printf("\nValor Com Desconto: R$%.2f",valor_total - desconto);
	printf("\nValor do desconto: R$%.2f",desconto);
	
	
	
	
	getch();
	return 0;
}

