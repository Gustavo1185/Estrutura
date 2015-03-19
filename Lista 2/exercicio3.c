#include<stdio.h>
//Maior de 2 numeros
int maior2(int a,int b){
	int maior;
	maior=0;
	if (maior<a){
		maior=a;
	}
	if (maior<b){
		maior=b;		
}	printf("\nmaior de 2 numeros: %d ",maior);
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	maior2(a,b);
	return 0;
}
