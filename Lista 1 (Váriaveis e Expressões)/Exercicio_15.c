#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*15. Receba o sal � ario de um funcion� ario, calcule e imprima o valor do novo sal � ario, sabendo
que ele recebeu um aumento de 25%.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int salario;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%d",&salario);
	
	printf("\n\nO sal�rio do funcion�rio com aumento: %f",salario+salario*.25);

	getch();
	return 0;
}

