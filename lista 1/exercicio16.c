#include <stdio.h> 
//Gratificação de 5% do salario base  e imposto de 7% sobre novo salario
float salario(float a){
float x,y,z,h;	
x=a*0.05;
y= x+a;
z=y*0.07;
h=y-z;
printf("%f",h);	
	
	
}


int main(){
float a;
scanf("%f",&a);
salario(a);
return 0;
}
