#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	char frase[100];
	int codigo, cont=0,escolha;
	
	do{
		printf("Selecione uma opção [1]Criptografar [2]Decifrar: ");
		scanf("%d",&escolha);
	}while(escolha!=1&&escolha!=2);
	
	if(escolha==1){
		fflush(stdin);
		printf("Digite a frase que deseja criptografar: ");
		scanf("%100[^\n]",frase);
		printf("Digite o número do código de criptografia: ");
		scanf("%d",&codigo);
		
		while(frase[cont]!='\0'){
			frase[cont]=frase[cont]+codigo;
			cont++;
		}
	}
	cont=0;
	if(escolha==2){
		fflush(stdin);
		printf("Digite a frase que deseja decifrar: ");
		scanf("%100[^\n]",frase);
		printf("\nDigite o número do código para decifrar a frase: ");
		scanf("%d",&codigo);
		
		while(frase[cont]!='\0'){
			frase[cont]=frase[cont]-codigo;
			cont++;
		}
	}

	system("cls");
	printf("%s",frase);
	
	
	printf("\n\n");
	system("pause");
	return 0;
}

