#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float vetor[5];
	int cont,codigo;
	
	for(cont=0;cont<5;cont++){
		printf("\nDigite o número desejado: ");
		scanf("%f",&vetor[cont]);
	}	
	
	printf("Digite o código [0]Sair [1]Mostrar [2]Iverter: ");
	scanf("%d",&codigo);
	
	if(codigo==0){
	
	}else if(codigo==1){
		for(cont=0;cont<5;cont++){
			printf("%.1f ",vetor[cont]);
		}
	}else if(codigo==2){
		for(cont=4;cont>=0;cont--){
			printf("%.1f ",vetor[cont]);
		}
	}else{
		printf("Código inválido");
	}
	

	getch();
	return 0;
}

