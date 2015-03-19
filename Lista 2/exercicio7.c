#include<stdio.h>
//ordem crescente,decrecente e maior no meio.
float crescente(float a ,float b,float c){
float x;
x=0;	
if (a>b && a>c){
	if (b>c){
		printf("%f  %f  %f",c,b,a);
		x=1;
	}
}	if (c>b){
		printf("%f  %f  %f",b,c,a);
		x=1;
		
}
if (x==0){
	if (b>a && b>c){
		if (a>c){
			printf("%f  %f  %f",c,a,b);
			x=1;
		}
	}	if (c>a){
			printf("%f  %f  %f",a,c,b);
			x=1;
			
	}
}
if (x==0){
	if (c>b && c>a){
		if (b>a){
			printf("%f  %f  %f",a,b,c);
			x=1;
	}
}		if (a>b){
			printf("%f  %f  %f",b,a,c);
			x=1;
			
}
}
return 0;
}

float decrescente(float a ,float b,float c){
float x;
x=0;	
if (a>b && a>c){
	if (b>c){
		printf("%f  %f  %f",a,b,c);
		x=1;
	}
}	if (c>b){
		printf("%f  %f  %f",a,c,b);
		x=1;
		
}
if (x==0){
	if (b>a && b>c){
		if (a>c){
			printf("%f  %f  %f",b,a,c);
			x=1;
		}
	}	if (c>a){
			printf("%f  %f  %f",b,c,a);
			x=1;
			
	}
}
if (x==0){
	if (c>b && c>a){
		if (b>a){
			printf("%f  %f  %f",c,b,a);
			x=1;
	}
}		if (a>b){
			printf("%f  %f  %f",c,a,b);
			x=1;
			
}
}
return 0;
}

float meio(float a ,float b,float c){
float x;
x=0;	
if (a>b && a>c){
	printf("%f  %f  %f",c,a,b);
	x=1;
		
}

if (x==0){
	if (b>a && b>c){
		printf("%f  %f  %f",c,b,a);
		x=1;

}
}
if (x==0){
	if (c>b && c>a){
			printf("%f  %f  %f",a,c,b);
			x=1;
			
}
}
return 0;
}



int main(){
	float a,b,c;
	int I;
	printf("digite 3 numeros");
	scanf("%f%f%f",&a,&b,&c);
	printf("1-crescente\n2-decrescente\n3-maior no meio\n");
	scanf("%d",&I);
	if (I==1){
		crescente(a,b,c);
	}
	if (I==2){
		decrescente(a,b,c);
	}
	if (I==3){
		meio(a,b,c);
	}
	return 0;
}
