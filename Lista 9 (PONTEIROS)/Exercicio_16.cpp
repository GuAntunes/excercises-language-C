#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int a=100,*b,**c,***d;
	b=&a;
	c=&b;
	d=&c;
	
	printf("Dobro: %d\n",*b *2);
	printf("Triplo: %d\n",**c *3);
	printf("Quadruplo: %d\n",***d *4);

	getchar();
	return 0;
}

