#include <stdio.h> 
//�rea do tri�ngulo
float area(float base,float altura){
float y;
y=(base*altura)/2;
printf("%f",y);
return 0;
}



int main(){
float base,altura;
scanf("%f%f",&base,&altura);
area(base,altura);
return 0;
}

