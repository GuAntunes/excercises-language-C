#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x=10, *px = &x;
	float y=20.10, *py=&y;
	char z='a',*pz=&z;
	
	printf("x: %d\n",x);
	printf("y: %f\n",y);
	printf("z: %c\n\n\n",z);
	
	printf("x: %d\n",*px);
	printf("y: %f\n",*py);
	printf("z: %c\n\n\n",*pz);

	*px = 100;
	*py *= 2;
	*pz = 'J';

	printf("x: %d\n",x);
	printf("y: %f\n",y);
	printf("z: %c\n\n\n",z);
	
	printf("x: %d\n",*px);
	printf("y: %f\n",*py);
	printf("z: %c\n\n\n",*pz);
	
	getchar();
	return 0;
}

