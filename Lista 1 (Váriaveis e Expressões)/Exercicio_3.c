#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*3. Efetue a leitura de um n�umero real e imprima o resultado do quadrado desse n�umero.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float num;	
	
	printf("Digite um n�mero para o calculo de pot�ncia: ");
	scanf("%f",&num);
	

	system("cls");
	printf("O numero %.1f ao quadrado � igual a: %.1f",num,pow(num,2));

	getch();
	return 0;
}

