#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num = 10;	
	
	printf("BASE 10: %d",num);
	printf("\nBASE 16: %x",num);
	printf("\nBASE 8: %o",num);
	
	// para alterar a posição onde o número será escrito:
	
	printf("\n\nNúmero: %d",num);
	printf("\nNúmero: %10d",num);
	
	getchar();
	system("cls");
	//Variaveis float ou double:
	
	double numero = 100.123456789;
	
	printf("%f\n",numero); //escreve o número com uma precisão de 6 casas depois da virgula aredondado o número
	printf("%e\n",numero); // O número é colocado como notação ciêntifica sem a utilização de virgula
	printf("%g\n",numero); // perde a precisão mais rapida e não arredonda o número
	printf("%a\n",numero); //  O número é colocado como notação ciêntifica com a utilização de virgula


	getchar();
	return 0;
}

