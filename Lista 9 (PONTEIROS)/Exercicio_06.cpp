#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int func(int *n1,int *n2){
	*n1 += *n1;
	*n2 += *n2;
	return *n1+*n2;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y, resp;
	
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	
	resp = func(&x,&y);
	
	system("cls");
	
	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("Soma: %d",resp);



	getchar();
	return 0;
}

