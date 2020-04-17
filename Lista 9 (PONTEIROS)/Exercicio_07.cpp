#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

void func(int *x, int y){
	*x += y;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int a,b,*p;
	
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	
	p = &a; 
	system("cls");
	func(p,b);
	
	printf("a: %d",a);
	printf("\nb: %d",b);
	
	
	getchar();
	return 0;
}

