#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int func(int *n1,int *n2,int *n3){
	int x,y,z;
	
	if(*n1==*n2&&*n2==*n3){
		return 0;	
	}
	
	if(*n1<*n2&&*n1<*n3){
		if(*n2<*n3){
			return 1;
		}else{
			x = *n1;
			y = *n3;
			z = *n2;
		}
	}else if(*n2<*n1&&*n2<*n3){
		x = *n2;
		if(n1<n3){
			y = *n1;
			z = *n3;
		}else{
			y = *n3;
			z = *n1;
		}
	}else if(*n3<*n2&&*n3<*n1){
		x = *n3;
		if(n1<n2){
			y = *n1;
			z = *n2;
		}else{
			y = *n2;
			z = *n1;
		}
	}
	*n1 = x;
	*n2 = y;
	*n3 = z;
	
	return 1;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,n3,x;
	
	printf("Digite um valor para n1: ");
	scanf("%d",&n1);
	printf("Digite um valor para n2: ");
	scanf("%d",&n2);
	printf("Digite um valor para n3: ");
	scanf("%d",&n3);
	
	
	x = func(&n1,&n2,&n3);
	system("cls");
	
	if(x==0){
		printf("Todos os valores são iguais.");
	}else{
		printf("n1: %d\n",n1);
		printf("n2: %d\n",n2);
		printf("n3: %d",n3);
	}


	getchar();
	return 0;
}

