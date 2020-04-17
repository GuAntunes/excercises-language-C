#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int SomaSerie(int i,int j,int k){
	if(i==j){
		return i+k;
	}else{
		return k + i + SomaSerie(i+1,j,k);
	}
	
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int a=1,b=3,c=10,resp;
	
	resp = SomaSerie(a,b,c);
	
	printf("%d",resp);



	getchar();
	return 0;
}

