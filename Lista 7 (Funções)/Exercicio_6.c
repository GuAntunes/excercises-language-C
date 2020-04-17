#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int h, int m, int s){
	int resultado=0;
	resultado = (h*3600) + (m*60) + s;
	return resultado;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int horas, minutos, segundos, resp;	
	
	printf("Horas: ");
	scanf("%d",&horas);
	printf("\nMinutos: ");
	scanf("%d",&minutos);
	printf("\nSegundos: ");
	scanf("%d",&segundos);

	resp = func(horas,minutos,segundos);
	
	system("cls");
	
	printf("Resultado em segundos: %d",resp);
	
	getch();
	return 0;
}

