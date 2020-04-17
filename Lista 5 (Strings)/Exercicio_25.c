#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char string1[50],string2[50];
	int cont;
	
	printf("Digite a primeira string: ");
	scanf("%50[^\n]",string1);
	fflush(stdin);
	printf("\n\nDigite a segunda string: ");
	scanf("%50[^\n]",string2);
	
	for(cont=0;cont<50;cont++){
		if(string1[cont]<string2[cont]){
			printf("\nA primeira string vem primeiro na ordem alfabetica");
			break;
		}else if(string2[cont]<string1[cont]){
			printf("\nA segunda string vem primeiro na ordem alfabetica");	
			break;
		}
	}



	getch();
	return 0;
}

