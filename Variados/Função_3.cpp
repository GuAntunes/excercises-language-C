#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int *num){
	*num = 200;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n = 100;
	
	func(&n);

	printf("%d",n);
	getchar();
	return 0;
}

