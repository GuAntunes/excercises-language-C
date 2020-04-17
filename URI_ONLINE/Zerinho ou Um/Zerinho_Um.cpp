#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int A,B,C;	
	
	do{
		printf("Alice: ");
		scanf("%d",&A);
	}while(A!=0&&A!=1);
	
	do{
		printf("Beto: ");
		scanf("%d",&B);
	}while(B!=0&&B!=1);	
	
	do{
		printf("Clara: ");
		scanf("%d",&C);
	}while(C!=0&&C!=1);	

	system("cls");

	if(A==B&&B==C){
		printf("*");
	}else if(B==C&&A!=B){
		printf("A");
	}else if(B==A&&B!=C){
		printf("C");
	}else if(A==C&&B!=C){
		printf("B");
	}

	getchar();
	return 0;
}

