#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
    printf("\nData Atual: %s\n",__DATE__);
    printf("\nHora Atual: %s\n",__TIME__);


	getchar();
	return 0;
}
