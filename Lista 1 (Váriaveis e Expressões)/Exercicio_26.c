#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int hora, minuto, segundos, duracao,horas_seg = 3600;	
	int hora_final, minuto_final, segundos_final;

	printf("Digite a hora: ");
	scanf("%d",&hora);
	
	printf("\nDigite os minutos: ");
	scanf("%d",&minuto);
	
	printf("\nDigite os segundos: ");
	scanf("%d",&segundos);

	printf("Digite quantos segundos durou a experiêcia: ");
	scanf("%d",&duracao);
	
	hora_final = duracao / horas_seg;
	minuto_final = (duracao - (horas_seg * hora_final))/60;
	segundos_final = (duracao - (horas_seg * hora_final) - (minuto_final * 60));
	
	hora_final = hora_final + hora;
	minuto_final = minuto_final + minuto;
	segundos_final = segundos_final + segundos;
	
	while(segundos_final>=60){
		segundos_final = segundos_final - 60;
		minuto_final++;
	}
	while(minuto_final>=60){
		minuto_final = minuto_final - 60;
		hora_final++;
	}
	
	system("cls");
	
	printf("Começo do experimento: %d horas %d minutos %d segundos.",hora,minuto,segundos);
	printf("\nTérmino do experimento: %d horas %d minutos %d segundos.",hora_final,minuto_final,segundos_final);
	
	getch();
	return 0;
}

