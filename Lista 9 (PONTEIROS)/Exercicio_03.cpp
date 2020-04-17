#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y;
	
	printf("Digite o valor para x: ");
	scanf("%d",&x);
	
	printf("Digite o valor para y: ");
	scanf("%d",&y);
	
	if(&x>&y){
		printf("%d",x);
	}else{
		printf("%d",y);
	}



	getchar();
	return 0;
}

