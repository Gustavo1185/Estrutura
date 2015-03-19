# include<stdio.h>
//Par ou impar
int numero(int x){
int y;
y=x % 2;
if (y==0){
	printf("par");
}
else{
	printf("impar");
}	
return 0;	
}




int main (){
int x;	
scanf("%d",&x);
numero(x);
return 0;	
}
