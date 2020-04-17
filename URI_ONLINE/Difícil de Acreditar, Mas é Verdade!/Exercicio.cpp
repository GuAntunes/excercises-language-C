#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int a, b, c,x;
	
	printf("Digite a: ");	
	scanf("%d",&a);
	
	printf("Digite b: ");
	scanf("%d",&b);
	
	printf("Digite c: ");
	scanf("%d",&c);
	
	x = a;
	a = 0;
 	do{
		a = a * 10;
		a = a + x % 10;
		x = x/10;
	}while(x!=0);

	x = b;
	b = 0;
 	do{
		b *= 10;
		b = b + x % 10;
		x = x/10;
	}while(x!=0);
	
	
	x = c;
	c = 0;
 	do{
		c *= 10;
		c = c + x % 10;
		x = x/10;
	}while(x!=0);
	
	system("cls");

	if(a+b==c){
		printf("TRUE");
	}else{
		printf("FAUSE");
	}
	
	
	
	
	
	



	getchar();
	return 0;
}

