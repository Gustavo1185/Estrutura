#include <stdio.h> 
//Área do círculo
float circulo(float r){
float pi,x;
pi=3.141592;
x=pi*(r*r);
printf("%f",x);
return 0;	
}


int main(){
float r,x;
scanf("%f",&r);
circulo(r);
return 0;
}
