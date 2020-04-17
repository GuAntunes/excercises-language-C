#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct info{
	char email[30],nome[30],endereco[50],cidade[20],CEP,CPF[15],nascimento[10];
	};

int verifica_email(info *dados){
	int Vemail = 0;
	printf("Digite o email: ");
	fflush(stdin);
	scanf("%30[^\n]",(*dados).email);
	
	for(int cont=0;cont<strlen((*dados).email);cont++){
		if((*dados).email[cont]=='@'){
			Vemail++;
		}
	}
	return Vemail;
}

void verifica_cpf(info *dados,int *Validador){
	printf("Digite o CPF: ");
	fflush(stdin);
	scanf("%14[^\n]",(*dados).CPF);
	if(strlen((*dados).CPF)!=11){
		*Validador = 0;
		return;
	}
	for(int cont=0;cont!='\0';cont++){
		if((*dados).CPF[cont]>57||(*dados).CPF[cont]<48){
			*Validador = 0;
			return;
		}
	}

	int aux=10;
	for(int cont=3;cont<12;cont+=4){
		for(int i=aux;i>cont-1;i--){
			(*dados).CPF[i+1] = (*dados).CPF[i];
		}
		if(cont<8){
			(*dados).CPF[cont] = '.';
		}else{
			(*dados).CPF[cont] = '-';
			(*dados).CPF[13] = '\0';
		}
		aux++;
	}
}

void verifica_nascimento(info *dados, int *validador){
	printf("Digite a data de nascimento: ")
	fflush(stdin);
	scanf("%10[^\n]",(*dados).nascimento);
	if(strlen((*dados).CPF)!=8){
		*Validador = 0;
		return;
	}
	
	
	
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	info dados;
	int Vemail=0,VCPF=1,Vnascimento=1;
	char nome[30];
	
	verifica_cpf(&dados,&VCPF);
	Vemail = verifica_email(&dados);
	
	
	system("cls");

	if(VCPF!=1){
		printf("CPF Inválido!\n");
	}
	if(Vemail!=1){
		printf("Email Inválido!");
	}
	
	getchar();
	return 0;
}

