#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num,resto3,resto5;
	
	printf("Digite o n�mero desejado: ");
	scanf("%d",&num);
	
	resto3 = num % 3;
	resto5 = num % 5;
	
	if(resto3==0&&resto5==5){
		printf("O n�mero � divisivel por 3 e por 5 simultaneamente");
	}else if(resto3==0&&resto5!=0){
		printf("O n�mero � divisivel apenas pelo 3");
	}else if(resto5==0&&resto3!=0){
		printf("O n�mero � divisivel apenas pelo 5");
	}else{
		printf("O n�mero n�o � divisivel nem por 3 nem por 5");
	}
	

	getch();
	return 0;
}

