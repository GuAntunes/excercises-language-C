#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int horas;
	float ValorHora, adicional;	

	printf("Digite o valor da hora: ");
	scanf("%f",&ValorHora);
	
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%d",&horas);
	
	adicional= (ValorHora*horas)*0.10;
	system("cls");
	
	printf("O sal�rio do funcionario �: %.2f",(ValorHora*horas)+adicional);
	

	getch();
	return 0;
}

