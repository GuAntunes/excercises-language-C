#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float salario, imposto, gratificacao;
	
	printf("Digite o salário base do funcionario: ");
	scanf("%f",&salario);
	
	imposto = salario * 0.07;
	gratificacao = salario* 0.05;
	
	system("cls");
	
	printf("O salário do funcionário é de: %f",salario-imposto+gratificacao);
	
	getch();
	return 0;
}

