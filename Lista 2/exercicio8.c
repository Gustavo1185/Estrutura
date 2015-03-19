#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//calculadora
int operacao(int a,int b,int x){
int resultado;
if (x==1){
	resultado=a+b;
	printf("%d",resultado);
}
if (x==2){
	resultado=a-b;
	printf("%d",resultado);
}	
if (x==3){
	resultado=a*b;
	printf("%d",resultado);
}
if (x==4){
	resultado=a/b;
	printf("%",resultado);
}
if (x==5){
	resultado=sqrt(a);
	printf("%d",resultado);
}	
return 0;
}



int main(){
int a,b,x;
printf("1. Somar dois numeros.\n2. Subtrair dois numeros\n3. Multiplicar dois numeros\n4. Dividir dois numeros\n5. Raiz quadrada de um numero\nDigite a opção desejada.\n" );
scanf("%d",&x);
if (x==5){
	printf("digite o numero :");
	scanf("%d",&a);
	operacao(a,b,x);
}
else{
	printf("digite 2 numeros :");
	scanf("%d%d",&a,&b);
	operacao(a,b,x);
}
return 0;
		
}
