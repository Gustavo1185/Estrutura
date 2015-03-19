#include <stdio.h> 
//Média de 3 numeros
float media(float a,float b,float c){
float x;
x=(a+b+c)/3;
printf("%f",x);
return 0;
}

int main(){
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
media(a,b,c);
return 0;
}
