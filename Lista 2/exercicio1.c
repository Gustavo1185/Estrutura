#include <stdio.h> 
//Média(pesos)
float media(float a,float b,float c){
float w;	
w=((a*2)+(b*3)+(c*5))/3;
printf("%f\n",w);
if (w>=8){
	printf("A");
}
if (w>=7 && w<8){
	printf("B");
}
if (w>=6 && w<7){
	printf("C");
}
if (w>=5 && w<6){
	printf("D");
}
if (w>=0 && w<5){
	printf("E");	
				
}
printf("\n");	
return 0;	
}

int main(){
float a,b,c,d,x,y,z,w;
printf("escreva 3 notas ");
scanf("%f%f%f",&a,&b,&c);
media(a,b,c);
return 0;
}
