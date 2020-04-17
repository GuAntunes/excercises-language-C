#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num = 10;	
	
	printf("BASE 10: %d",num);
	printf("\nBASE 16: %x",num);
	printf("\nBASE 8: %o",num);
	
	// para alterar a posi��o onde o n�mero ser� escrito:
	
	printf("\n\nN�mero: %d",num);
	printf("\nN�mero: %10d",num);
	
	getchar();
	system("cls");
	//Variaveis float ou double:
	
	double numero = 100.123456789;
	
	printf("%f\n",numero); //escreve o n�mero com uma precis�o de 6 casas depois da virgula aredondado o n�mero
	printf("%e\n",numero); // O n�mero � colocado como nota��o ci�ntifica sem a utiliza��o de virgula
	printf("%g\n",numero); // perde a precis�o mais rapida e n�o arredonda o n�mero
	printf("%a\n",numero); //  O n�mero � colocado como nota��o ci�ntifica com a utiliza��o de virgula


	getchar();
	return 0;
}

