#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int salario,emprestimo,aux=0;
	
	printf("Digite o salário do trabalhador: ");
	scanf("%d",&salario);
	
	printf("\nDigite o valor da prestação do emprestimo: ");
	scanf("%d",&emprestimo);
	
	aux = (salario/100)*20;
	
	if(aux>=emprestimo){
		printf("Emprestimo Concedido!!");
	}else{
		printf("Emprestimo Não Concedido!!");
	}

	getch();
	return 0;
}

