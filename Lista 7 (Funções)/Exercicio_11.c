#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

float func(int nota1, int nota2, int nota3){
	return ((nota1+nota2+nota3)/3);
}
float func2(int nota1, int nota2, int nota3){
	return (((nota1*5)+(nota2*3)+(nota3*2))/10);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n1, n2, n3, resp;
	char escolha;
	
	printf("N1: ");
	scanf("%f",&n1);
	printf("\nN2: ");
	scanf("%f",&n2);
	printf("\nN3: ");
	scanf("%f",&n3);
	
	fflush(stdin);
	printf("\n\n[P]onderada ou [A]ritimetica: ");
	scanf("%c",&escolha);
	escolha = toupper(escolha);
	if(escolha=='A'){
		resp = func(n1,n2,n3);
		printf("\nMédia Aritimética: %f",resp);
	}else if(escolha=='P'){
		resp = func2(n1,n2,n3);
		printf("\nMédia Ponderada: %f",resp);
	}else{
		printf("\nOpção inválida!!!!");
	}
	
	



	getch();
	return 0;
}

