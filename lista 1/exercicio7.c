#include <stdio.h> 
//Convers�o de metros para cent�metros
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
