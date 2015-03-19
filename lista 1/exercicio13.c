#include <stdio.h> 
//Média ponderada(nota x peso/qtd de notas)
float media(float a,float b,float c,float x,float y,float z){
float w;	
w=((a*x)+(b*y)+(c*z))/3;
printf("%f",w);	
return 0;	
}

int main(){
float a,b,c,d,x,y,z,w;
printf("escreva 3 notas e 3 pesos para as repectivas notas");
scanf("%f%f%f%f%f%f",&a,&b,&c,&x,&y,&z);
media(a,b,c,x,y,z);
return 0;
}
