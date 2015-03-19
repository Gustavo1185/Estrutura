#include<stdio.h>
//data e hora
int sistema(int a,int b,int c,int x,int y){
	int h;
	if (b==1){
		printf("%d/janeiro/%d",a,c);
	}
	if (b==2){
		printf("%d/fevereiro/%d",a,c);
	}
	if (b==3){
		printf("%d/março/%d",a,c);
	}
	if (b==4){
		printf("%d/abril/%d",a,c);
	}
	if (b==5){
		printf("%d/maio/%d",a,c);
	}
	if (b==6){
		printf("%d/junho/%d",a,c);
	}
	if (b==7){
		printf("%d/julho/%d",a,c);
	}
	if (b==8){
		printf("%d/agosto/%d",a,c);
	}
	if (b==9){
		printf("%d/setembro/%d",a,c);
	}
	if (b==10){
		printf("%d/outubro/%d",a,c);
	}
	if (b==11){
		printf("%d/novembro/%d",a,c);
	}
	if (b==12){
		printf("%d/dezembro/%d",a,c);
	}
	h=(x*60)+ y;
	printf("\n%d minutos",h);
	printf("\n");
	return 0;
	
}



int main(){
	int a,b,c,x,y;
	printf("digite a data: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("digite a hora e os minutos: ");
	scanf("%d%d",&x,&y);
	sistema(a,b,c,x,y);
	return 0;
	
}
