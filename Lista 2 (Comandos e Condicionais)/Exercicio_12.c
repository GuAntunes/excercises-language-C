#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int opcao,num1,num2;
	
	printf("1-Soma de 2 n�meros\n2- Diferen�a entre 2 n�meros (maior pelo menor).");
	printf("\n3-Produto entre 2 n�meros.\n4-Divis~ao entre 2 n�meros\n\nDigite uma op��o: ");
	scanf("%d",&opcao);
	
	system("cls");
	
	if(opcao==1){
		printf("Digite um primeiro n�mero: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo n�mero: ");
		scanf("%d",&num2);
		printf("Soma: %d",num1+num2);
	}else if(opcao==2){
		printf("Digite um primeiro n�mero: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo n�mero: ");
		scanf("%d",&num2);
		if(num1>=num2){
			printf("A diferen�a: %d",num1-num2);
		}else{
			printf("A diferen�a: %d",num2-num1);
		}
		}else if(opcao==3){
		printf("Digite um primeiro n�mero: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo n�mero por qual deseja dividir: ");
		scanf("%d",&num2);
		printf("\nDivis�o: %f",num1/num2);
	}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}

