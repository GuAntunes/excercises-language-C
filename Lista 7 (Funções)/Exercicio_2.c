#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int dia, mes, ano;
	
	printf("Digite o dia: ");
	scanf("%d",&dia);
	printf("\nDigite o mes: ");
	scanf("%d",&mes);
	printf("\nDigite o ano: ");
	scanf("%d",&ano);
	system("cls");
	data(mes,dia,ano);

	getch();
	return 0;
}

int data(int mes,int dia, int ano){
	switch (mes){
	case 1:
		printf("%d Janeiro de %d",dia,ano);
	break;
	case 2:
		printf("%d Fevereiro de %d",dia,ano);
	break;
	case 3:
		printf("%d Março de %d",dia,ano);
	break;
	case 4:
		printf("%d Abril de %d",dia,ano);
	break;
	case 5:
		printf("%d Maio de %d",dia,ano);
	break;
	case 6:
		printf("%d Junho de %d",dia,ano);
	break;
	case 7:
		printf("%d Julho de %d",dia,ano);
	break;
	case 8:
		printf("%d Agosto de %d",dia,ano);
	break;
	case 9:
		printf("%d Setembro de %d",dia,ano);
	break;
	case 10:
		printf("%d Outubro de %d",dia,ano);
	break;
	case 11:
		printf("%d Novembro de %d",dia,ano);
	break;
	case 12:
		printf("%d Dezembro de %d",dia,ano);
	break;
	}
}
