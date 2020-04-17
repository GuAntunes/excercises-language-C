#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Utilizando uma estrutura, fazer um programa que permita a entrada de nome, enderec¸o
e telefone de 5 pessoas e os imprima em ordem alfab´ etica*/

struct informacoes{
	char nome[30];
	char endereco[50];
	int telefone;	
};


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct informacoes info[5];
	int cont, contador,vezes,aux=0,auxAnalise=,analise[5],fixo=4;
	
	for(cont=0;cont<5;cont++){
		fflush(stdin);
		printf("\n\nDigite o nome da pessoa: ");
		scanf("%30[^\n]",info[cont].nome);
		fflush(stdin);
		/*printf("\nDigite o endereço: ");
		scanf("%50[^\n]",info[cont].endereco);
		fflush(stdin);
		printf("\nDigite o telefone: ");
		scanf("%d",&info[cont].telefone);*/
	}

	
	for(cont=0;cont<5;cont++){
		vezes = 0;
		for(contador=0;contador<5;contador++){
			if(cont==contador){
				break;
			}
			for(aux=0;aux<=auxAnalise;aux++){
				if (analise[aux]==contador){
					break;
				}
			}
			if(strcmp(info[cont].nome,info[contador].nome)==1){
				vezes++;	
			}	
			if(vezes==fixo){
				printf("%s",info[cont].nome);
				fixo--;
				analise[auxAnalise]= cont;
				auxAnalise++;
				break;
			}
		}
	}	


	getch();
	return 0;
}

