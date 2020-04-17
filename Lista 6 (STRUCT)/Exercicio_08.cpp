#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct horario{
	int horas, minutos, segundos;
};

typedef struct data{
	int dia, mes, ano;
};

typedef struct compromisso{
	data date;
	horario hour;
	char texto[300];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	compromisso info;
	
	printf("Horario: ");
	scanf("%d %d %d",&info.hour.horas,&info.hour.minutos,&info.hour.segundos);
	
	printf("Data: ");
	scanf("%d %d %d",&info.date.dia,&info.date.mes,&info.date.ano);
	fflush(stdin);	
	printf("Descrição: ");
	gets(info.texto);
	
	system("cls");
	
	printf("Horario: %d:%d:%d",info.hour.horas,info.hour.minutos,info.hour.segundos);
	printf("\nData: %d/%d/%d",info.date.dia,info.date.mes,info.date.ano);
	printf("\nDescrição: %s",info.texto);
	
	
	getchar();
	return 0;
}

