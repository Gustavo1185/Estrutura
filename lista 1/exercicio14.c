#include <stdio.h> 
//Sálario + 25%
float salario(float a){
float x,b;
x=(a * 0.25) + a;
printf("%f",x);	
return 0;
}



int main(){
float a;
scanf("%f",&a);
salario(a);
return 0;
}
