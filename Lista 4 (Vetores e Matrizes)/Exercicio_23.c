#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float vetor1[5], vetor2[5], escalar=0;
	int cont;
	
	printf("Primeiro Vetor: \n\n");
	for(cont=0;cont<5;cont++){
		printf("[%d]Digite o número desejado: ",cont);
		scanf("%f",&vetor1[cont]);
	}
	
	printf("Segundo Vetor: \n\n");
	for(cont=0;cont<5;cont++){
		printf("[%d]Digite o número desejado: ",cont);
		scanf("%f",&vetor2[cont]);
	}
	
	for(cont=0;cont<5;cont++){
		escalar = escalar + (vetor1[cont] * vetor2[cont]);
	}
	
	printf("\n\nProduto escalar: %f",escalar);
	
	
	



	getch();
	return 0;
}

