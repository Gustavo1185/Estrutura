#include <stdio.h>
//Farenheit para celsius
float conversao(float F){
float C;
C=(5*(F-32)/9);
printf("%f",C);
return 0;
}



 
int main(){
float F,C;
printf("temperatura em Farenheit");
scanf("%f",&F);
conversao(F);
return 0;
}
