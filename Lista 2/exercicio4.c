#include<stdio.h>
int ordenacao(int a ,int b,int c){
int x;
x=0;	
if (a>b && a>c){
	if (b>c){
		printf("%d%d%d",c,b,a);
		x=1;
	}
}	if (c>b){
		printf("%d%d%d",b,c,a);
		x=1;
		
}
if (x==0){
	if (b>a && b>c){
		if (a>c){
			printf("%d%d%d",c,a,b);
			x=1;
		}
	}	if (c>a){
			printf("%d%d%d",a,c,b);
			x=1;
			
	}
}
if (x==0){
	if (c>b && c>a){
		if (b>a){
			printf("%d%d%d",a,b,c);
			x=1;
	}
}		if (a>b){
			printf("%d%d%d",b,a,c);
			x=1;
			
}
}
return 0;
}

int main(){
	int a,b,c;
	printf("digite 3 numeros");
	scanf("%d%d%d",&a,&b,&c);
	ordenacao(a,b,c);
	return 0;
}
