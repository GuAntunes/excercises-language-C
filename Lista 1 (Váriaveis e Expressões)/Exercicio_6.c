#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*6. Leia quatro notas, calcule a m´edia aritm ´ etica e imprima o resultado.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,n3,n4,media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);	
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	printf("Digite a quarta nota: ");
	scanf("%f",&n4);
	
	
	media= (n1+n2+n3+n4)/4;
	
	system("cls");
	
	printf("A média das notas é: %.1f",media);

	getch();
	return 0;
}

