#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,n3;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	printf("Digite o terceiro número: ");
	scanf("%d",&n3);
	
	if(n1>n2&&n1>n3){
		if(n2>n3){
			printf("%d, %d, %d",n1,n2,n3);
		}else{
			printf("%d, %d, %d",n1,n3,n2);
		}
	}else if(n2>n1&&n2>n3){
		if(n1>n3){
			printf("%d, %d, %d",n2,n1,n3);
		}else{
			printf("%d, %d, %d",n2,n3,n1);
		}
	}else if(n3>n1&&n3>n2){
		if(n2>n1){
			printf("%d, %d, %d",n3,n2,n1);
		}else{
			printf("%d, %d, %d",n3,n1,n2);
		}
	}

	getch();
	return 0;
}

