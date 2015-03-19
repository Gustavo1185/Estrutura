#include <stdio.h> 
//Conversão de metros para centímetros
float converte(float x){
float y;
y=x*100;
printf("%f",y);
return 0;
}
int main(){
float x;
scanf("%f",&x);
converte(x);
return 0;
}
