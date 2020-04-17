#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,n3,media;
	
	do{
		printf("Digite o valor da primeira nota: ");
		scanf("%f",&n1);
	}while(n1<0||n1>10);
	
	do{
		printf("\nDigite o valor da segunda nota: ");
		scanf("%f",&n2);
	}while(n2<0||n2>10);
	
	do{
		printf("\nDigite o valor da terceira nota: ");
		scanf("%f",&n3);	
	}while(n3<0||n3>10);
		
	media = ((n1*2)+(n2*3)+(n3*5))/10;
	
	if(media<=2.9){
		printf("O aluno está Reprovado!");
	}else if(media>=3&&media<=4.9){
		printf("O aluno está de Recuperação!");
	}else{
		printf("O aluno está Aprovado!");
	}

	

	getch();
	return 0;
}

