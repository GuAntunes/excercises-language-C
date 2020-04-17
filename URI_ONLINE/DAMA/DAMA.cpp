#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x1,x2,y1,y2,movimento;
	
	do{
		printf("X1: ");
		scanf("%d",&x1);
	}while(x1<1||x1>8);

	do{
		printf("Y1: ");
		scanf("%d",&y1);
	}while(y1<1||y1>8);
	
	do{
		printf("X2: ");
		scanf("%d",&x2);
	}while(x2<1||x2>8);
	
	do{
		printf("Y2: ");
		scanf("%d",&y2);
	}while(y2<1||y2>8);
	
	movimento = 0;
	
	if(x1==x2&&y1==y2){
		movimento=0;
	}else{
		movimento++;
		if(x1<x2&&y1<y2){
			while(x1!=x2&&y1!=y2){
				x1++;
				y1++;
				if(x1==x2&&y1!=y2||y1==y2&&x1!=x2){
					movimento++;
					break;
				}
			}
		}else if(x1>x2&&y1>y2){
			while(x1!=x2&&y1!=y2){
				x1--;
				y1--;
				if(x1==x2&&y1!=y2||y1==y2&&x1!=x2){
					movimento++;
					break;
				}
			}
		}else if(x1>x2&&y1<y2){
			while(x1!=x2&&y1!=y2){
				x1--;
				y1++;
				if(x1==x2&&y1!=y2||y1==y2&&x1!=x2){
					movimento++;
					break;
				}
			}	
		}else if(x1<x2&&y1>y2){
			while(x1!=x2&&y1!=y2){
				x1++;
				y1--;
				if(x1==x2&&y1!=y2||y1==y2&&x1!=x2){
					movimento++;
					break;
				}
			}	
		}
	}
	
	system("cls");
	printf("Número de movimentos: %d",movimento);

	getchar();
	return 0;
}

