#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;

typedef struct vetor{
	float x,y,z;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	vetor v1={10,20,30},v2;
	v2.x = v1.x * v1.x * v1.x;
	v2.y = v1.y * v1.y * v1.y;	
	v2.z = v1.z * v1.z * v1.z;
		
	printf("%f %f %f",v1.x,v1.y,v1.z);
	printf("\n\n%f %f %f",v2.x,v2.y,v2.z);	


	getchar();
	return 0;
}

