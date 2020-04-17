#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void simplifica(int *x, int *y){
	
	for(int cont=2;cont<=*x&&cont<=*y;cont++){
		while(*x%cont==0&&*y%cont==0){
			*x /= cont;
			*y /= cont;
		}
	}
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numerador, denominador;
	
	printf("Digite o numerador: ");
	scanf("%d",&numerador);

	printf("Digite o denominador: ");
	scanf("%d",&denominador);

	simplifica(&numerador,&denominador);
	
	system("cls");
	
	printf("Numerador: %d",numerador);
	printf("\nDenominador: %d",denominador);
	
	getchar();
	return 0;
}

