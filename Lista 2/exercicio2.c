#include <stdio.h> 
//M�dia de 3 numeros(com classifica��o)
float media(float a,float b,float c){
float x,y;
x=(a+b+c)/3;
printf("\n%f",x);
if (x>0 && x<3){
	printf("\nreprovado");
}
if (x>=3 && x<7){
	printf("\nExame");
	y=7-x;
	printf("\nPrecisa de %f",y);
}
if (x>=7){
	printf("\nAprovado");
}
return 0;
}

int main(){
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
media(a,b,c);
return 0;
}
