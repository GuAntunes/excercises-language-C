#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie uma func��ao que recebe como par�ametro um n�umero inteiro e devolve o seu dobro. 

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	printf("Digite o n�mero desejado: ");
	scanf("%d",&numero);
	
	numero =  dobro(numero);

	printf("\n\nN�mero: %d",numero);
	
	getch();
	return 0;
}


int dobro(int x){
	x = x + x;
	printf("Valor de x: %d",x);
	return x;
}
