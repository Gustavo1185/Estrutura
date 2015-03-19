#include <stdio.h> 
//Média de 4 notas
float nota(float a,float b,float c,float d){
float x;
x=(a+b+c+d)/4;
printf("%f",x);
return 0;
}
int main(){
float a,b,c,d;
scanf("%f%f%f%f",&a,&b,&c,&d);
nota(a,b,c,d);
return 0;
}
