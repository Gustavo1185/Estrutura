#include <stdio.h> 
//Área do quadrado x 2
float quadrado(float x){
float y,resultado;
y=x*x;
resultado=2*y;
printf("%f",resultado);
return 0;
}


int main(){
float x,y;
scanf("%f",&x);
quadrado(x);
return 0;
}
