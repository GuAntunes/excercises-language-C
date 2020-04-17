#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct info_pessoa{
	char nome[30], email[30],obs[60];
	info_endereco endereco;
	info_tel telefone;
	info_data aniversario;
	
};

typedef struct info_enderco{
	char rua[50],complemento[10],bairro[20],
	cep[10],cidade[20], estado[2],pais[20];
};

typedef struct info_tel{
	int ddd, telefone;
};

typedef struct info_data{
	int dia, mes, ano;
};


int main(){
	setlocale(LC_ALL,"portuguese");
	
	info_pessoa agenda[100];	
	


	getchar();
	return 0;
}

