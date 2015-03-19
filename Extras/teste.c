#include<stdio.h>
main(){
	int a=6,b=3,c=1,d=9,maior;
	maior2(a,b);
	maior3(a,b,c);
	maior4(a,b,c,d);
	teste(a,b,c,d);
	return 0;
}
int maior2(int a,int b,int maior,int resultado1){
	maior=0;
	if (maior<a){
		maior=a;
	}
	if (maior<b){
		maior=b;		
}	printf("\nmaior de 2 numeros: %d ",maior);
}
int maior3(int a,int b,int c,int maior){
	maior=0;
	if (maior<a){
		maior=a;
	}
	if (maior<b){
		maior=b;
		}
		
	if (maior<c){
		maior=c;		
}	printf("\nmaior de 3 numeros: %d ",maior);
	
}
int maior4(int a,int b,int c,int d,int maior){
	maior=0;
	if (maior<a){
		maior=a;
	}
	if (maior<b){
		maior=b;
		}
		
	if (maior<c){
		maior=c;
		}
	if (maior<d){
		maior=d;			
}	printf("\nmaior de 4 numeros: %d ",maior);
	
}
int teste(int a,int b,int c,int d,int teste){
	if (a-b>0){
		teste=a;
		printf("\nteste 2 : %d",teste);
	}
	else {
		teste=b;
		printf("\nteste 2: %d",teste);
	}
	if (teste-c>0){
		printf("\nteste 3 : %d",teste);
	}
	if (teste-c<0){
		teste=c;
		printf("\nteste 3 : %d",c);
	}
	if (teste-d>0){
		printf("\nteste 4 : %d",teste);
		
		}
	if (teste-d<0){
		printf("\nteste 4 : %d",d);
	}	
	}

	




















