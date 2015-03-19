#include<stdio.h>
//verifica datas
 int verifica(int a,int b,int c,int x ,int y ,int z){
 int h;
 h=0;
 if (c>z){
 	printf("a primeira data e maior");
 	h=1;
 }
 if (z>c){
 	printf("a segunda data e maior");
 	h=1;
 }
 if (h==0){
 	if (b>y){
 		printf("a primeira data e maior");
 		h=1;
 }
 	if (y>b){
 		printf("a segunda data e maior");
 		h=1;
 }
 	if (h==0){
 		if (a>x){
 			printf("a primeira data e maior");
 			h=1;
 }
 		if (x>a){
 			printf("a segunda data e maior");
 			h=1;
 }
 		if (x==0){
 			printf("são iguais");
		 }
	 }
 }	
return 0;
}
int main(){
	int a,b,c,x,y,z;
	printf("primeira data: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("segunda data: ");
	scanf("%d%d%d",&x,&y,&z);
	verifica(a,b,c,x,y,z);
}
