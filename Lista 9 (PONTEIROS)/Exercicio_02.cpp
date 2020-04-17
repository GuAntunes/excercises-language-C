#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y;
	
	if(&x>&y){
		printf("%d",&x);
	}else{
		printf("%d",&y);
	}
	
	
	
	



	getchar();
	return 0;
}

