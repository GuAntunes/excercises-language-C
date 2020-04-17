#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

void func(int *x,int *y){
	int aux;
	
	if(*x<*y){
		aux= *x;
		*x = *y;
		*y = aux;
	}
	return;
}



int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x,y;
		
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);

	func(&x,&y);
	
	printf("x: %d",x);
	printf("y: %d",y);


	getchar();
	return 0;
}

