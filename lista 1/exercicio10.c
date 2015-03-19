#include <stdio.h> 
//Sálario (horas,valor da hora)
float salario(float x,float y){
float z;
z=x*y;
printf("%f",z);		
return 0;
}



int main(){
float x,y;
printf("quanto ganha por hora e o numero de horas que trabalha por mes");
scanf("%f%f",&x,&y);
salario(x,y);
return 0;
}
