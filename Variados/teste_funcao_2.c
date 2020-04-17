#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(){
	return 100;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n;
	
	n = func();

	printf("%d",n);
	
	getch();
	return 0;
}

