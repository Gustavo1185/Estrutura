#include <stdio.h>
//Soma 4 numeros inteiros
int valor(int a,int b,int c,int d){
	int x;
	x=a+b+c+d;
	printf("%d",x);
	return 0;
}

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	valor(a,b,c,d);
	return 0;
}
