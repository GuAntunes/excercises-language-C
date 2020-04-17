#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Fac¸a uma func¸˜ao que receba uma temperatura em graus Celsius 
e retorne-a convertida em graus Fahrenheit. A f´ormula de convers˜ao ´
 e: F = C *(9.0/5.0) + 32.0, sendo F atemperatura em Fahrenheit e C a temperatura
  em Celsius. */
  
float func(float temp){
	float faren;
	faren = temp * (9/5) + 32;
	return faren;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float temperatura,far;
		
	printf("Digite uma temperatura em graus Celsius: ");
	scanf("%f",&temperatura);
	
	far = func(temperatura);
	
	printf("\nTemperatura em Fahrenheit: %.2f",far);
	
	getch();
	return 0;
}

