#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Tr ˆes amigos jogaram na loteria. Caso eles ganhem, o pr ˆemio deve ser repartido proporcionalmente
ao valor que cada deu para a realizac¸ ˜ao da aposta. Fac¸a um programa
que l ˆe quanto cada apostador investiu, l ˆe o valor do pr ˆemio, e escreve quanto cada um
ganharia.*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int jogador1, jogador2, jogador3, premio, aux = 0;
	
	printf("Digite quanto o jogador 1 investiu na aposta: ");
	scanf("%d",&jogador1);	
	printf("\nDigite quanto o jogador 2 investiu na aposta: ");
	scanf("%d",&jogador2);
	printf("\nDigite quanto o jogador 3 investiu na aposta: ");
	scanf("%d",&jogador3);	
	printf("Digite o valor do prêmio: ");
	scanf("%d",&premio);
	
	aux = premio / (jogador1+jogador2+jogador3);
	jogador1= jogador1 * aux;
	jogador2 = jogador2 * aux;
	jogador3 = jogador3 * aux;
	
	system("cls");
	
	printf("O jogador 1 recebera aproximadamente: %d",jogador1);
	printf("\nO jogador 2 recebera aproximadamente: %d",jogador2);	
	printf("\nO jogador 3 recebera aproximadamente: %d",jogador3);
	
	
	
	getch();
	return 0;
}

