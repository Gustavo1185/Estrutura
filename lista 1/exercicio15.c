#include <stdio.h> 
//Sálario + percentual de aumento= Novo Salario
float salario(float a,float b){
float x,y;	
x=a*(b/100);
y= x+a;
printf("%f",y);	
return 0;	
}



int main(){
float a,b;
printf("digite o salario e o percentual de aumento");
scanf("%f%f",&a,&b);
salario(a,b);
return 0;
}
