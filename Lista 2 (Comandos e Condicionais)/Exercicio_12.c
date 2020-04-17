#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int opcao,num1,num2;
	
	printf("1-Soma de 2 números\n2- Diferença entre 2 números (maior pelo menor).");
	printf("\n3-Produto entre 2 números.\n4-Divis~ao entre 2 números\n\nDigite uma opção: ");
	scanf("%d",&opcao);
	
	system("cls");
	
	if(opcao==1){
		printf("Digite um primeiro número: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo número: ");
		scanf("%d",&num2);
		printf("Soma: %d",num1+num2);
	}else if(opcao==2){
		printf("Digite um primeiro número: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo número: ");
		scanf("%d",&num2);
		if(num1>=num2){
			printf("A diferença: %d",num1-num2);
		}else{
			printf("A diferença: %d",num2-num1);
		}
		}else if(opcao==3){
		printf("Digite um primeiro número: ");
		scanf("%d",&num1);
		printf("\nDigite um segundo número por qual deseja dividir: ");
		scanf("%d",&num2);
		printf("\nDivisão: %f",num1/num2);
	}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}

