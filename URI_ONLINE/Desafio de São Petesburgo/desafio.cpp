#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

struct dados1{
	int linha;
	char coluna;
};

struct dados{
	dados1 p;
	char tipo;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num,linha;
	char tipo,coluna;
	dados *file;
	dados1 rei;
	
	do{
		printf("Digite o número de peças pretas: ");
		scanf("%d",&num);
	}while(num<2||num>10);
	
	file = (dados*) malloc (sizeof(dados)*num);
	
	for(int cont=0;cont<num;cont++){
		system("cls");
		printf("Peça %d\n",cont+1);
		do{
			printf("Digite o tipo da peça [p,t,b,r,w]: ");
			fflush(stdin);
			scanf("%c",&file[cont].tipo);
		}while(file[cont].tipo!='p'&&file[cont].tipo!='t'&&file[cont].tipo!='b'&&file[cont].tipo!='r'&&file[cont].tipo!='w');
		
		do{
			printf("Digite a coluna: ");
			fflush(stdin);
			scanf("%c",&file[cont].p.coluna);
		}while(file[cont].p.coluna<97||file[cont].p.coluna>104);
		
		do{
			printf("Digite a linha: ");
			scanf("%d",&file[cont].p.linha);
		}while(file[cont].p.linha<1||file[cont].p.linha>8);
	}
	
	do{
		printf("Digite a coluna do rei branco: ");
		fflush(stdin);
		scanf("%c",&rei.coluna);
	}while(rei.coluna<97||rei.linha>104);
	
	do{
		printf("Digite a linha do rei branco: ");
		scanf("%d",&rei.linha);
	}while(rei.linha<1||rei.linha>8);
	
	for(int cont=0;cont<num;cont++){
		if(rei.linha==file[cont].p.linha&&rei.coluna==file[cont].p.coluna){
			printf("Existe duas peças em uma posição no tabuleiro!!");
			getchar();
			exit(0);
		}
	}



	free(file);
	getchar();
	return 0;
}

