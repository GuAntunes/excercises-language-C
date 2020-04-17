#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*11. Leia o valor do raio de um c´ýrculo e calcule a ´area do c´ýrculo correspondente. Imprima o
resultado dessa operac¸ ˜ao. A ´area do c´ýrculo ´e   raio2, considere  = 3:141592.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float raio,area;
	
	
	printf("Digite o raio do circulo: ");
	scanf("%f",&raio);
	
	system("cls");
	
	
	area= 3.141592 * (pow(raio,2));
	
	printf("A área deste circulo é: %.1f",area);
	
	

	getch();
	return 0;
}

