#include<stdio.h>
//Ordem decrescente com incremento de um numero 
 int incluindo(int a,int b,int c,int x){
 if(x>a && x>b && x>c) {
 	printf("%d %d %d %d",x,c,b,a);	
 }	
 if(x<a && x<b && x<c) {
 	printf("%d %d %d %d",a,b,c,x);
 }
 if(x>a && x<b) {
 	printf("%d %d %d %d",c,b,x,a);	
 	
 }
 if(x>b && x<c) {
 	printf("%d %d %d %d",c,x,b,a);	
 	
 }
return 0;
}



int main(){
int a,b,c,x;
a=3;
b=14;
c=56;
scanf("\n%d",&x);
incluindo(a,b,c,x);
return 0;	
}
