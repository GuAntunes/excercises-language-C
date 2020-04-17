#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Fac¸a um algoritmo que calcule a m´edia ponderada das notas de 3 provas. A primeira e
a segunda prova t ˆem peso 1 e a terceira tem peso 2. Antes de o usu´ ario entrar com as
notas do aluno ele deve entrar com o n´umero de matricula do aluno. Ao final, mostrar
a matricula do aluno juntamente com a sua m´edia e indicar se o aluno foi aprovado ou
reprovado. A nota para aprovac¸ ˜ao deve ser igual ou superior a 60 pontos.*/


int main()
{
	setlocale(LC_ALL,"portuguese");

	int matricula, n1, n2 , n3 , media =0;
	printf("Digite o número de matricula do aluno: ");
	scanf("%d",&matricula);
	
	printf("Digite o valor da primeira nota: ");
	scanf("%d",&n1);	
	printf("Digite o valor da segunda nota: ");
	scanf("%d",&n2);
	printf("Digite o valor da terceira nota: ");
	scanf("%d",&n3);
	
	system("cls");
	
	printf("Número de matricula do aluno: %d",matricula);
	media = (n1 + n2 + (n3*2))/4;
	
	printf("\n\nNota Ponderada: %d",media);
	
	if(media<60){
		printf("\nO aluno esta Reprovado!!");
	}else if(media>=60){
		printf("\nO aluno esta Aprovado!!");
	}
	
	
	getch();
	return 0;
}

