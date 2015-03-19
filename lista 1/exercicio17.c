//Gratificação de 50 do salario  e imposto de 10% sobre o salario base
float salario(float a){
float x,z,y;	
x=a+ 50;
y=a*0.1;
z=x-y;
printf("%f",z);	
return 0;	
	
}


int main(){
float a;
scanf("%f",&a);
salario(a);
return 0;
}
