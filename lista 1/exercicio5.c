#include <stdio.h> 
//Soma de 2 numeros
float soma2(float a,float b){
	float x;
	x=a+b;
	printf("%f",x);
	return 0;
}


int main(){
float a,b;
printf("escreva dois numeros");
scanf("%f%f",&a,&b);
soma2(a,b);
return 0;
}
