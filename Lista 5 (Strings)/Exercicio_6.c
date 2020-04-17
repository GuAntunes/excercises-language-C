#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
//pessoa e a palavra “ACEITA”, caso contra´ rio imprimir “NA˜O ACEITA”.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30], sexo[10];
	int idade;	
	
	printf("Digite o nome: ");
	scanf("%30[^\n]",nome);
	printf("\nDigite a idade: ");
	scanf("%d",&idade);
	fflush(stdin);
	printf("\nDigite o sexo [FEMININO][MASCULINO]: ");
	scanf("%10[^\n]",sexo);

	if(strcasecmp(sexo,"FEMININO")==0&&idade<25){
		printf("%s ACEITA",nome);
	}else{
		printf("%s NÃO ACEITA",nome);
	}
	
	getch();
	return 0;
}

