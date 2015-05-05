#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct aluno{
   char nome[81];
   int mat;
   char end[121];
   char tel[21];  
};

typedef struct aluno Aluno;
typedef struct aluno *Paluno;
Paluno tab[MAX];  

void inicia(){
  int i;
	for(i=0;i<MAX;i++){
		tab[i]=NULL;           
	}
}
       
void recebe(int i){
	  if(tab[i]==NULL){
    	tab[i]=(Paluno)malloc(sizeof(Aluno));
	  }  
      scanf("%s",tab[i]->nome);
      scanf("%d",&tab[i]->mat);
      scanf("%s",tab[i]->end);
      scanf("%s",tab[i]->tel);
}
          
void retira(int i){   
	  free(tab[i]);   
      tab[i]=NULL;    
}

int verifica(int i){
	printf("\n\n%s\n",tab[i]->nome);
	printf("%d\n",tab[i]->mat);
	printf("%s\n",tab[i]->end);
	printf("%s\n",tab[i]->tel); 	       
}

void imprime(){
    int i;
    for (i=0;i<MAX;i++){
    	verifica(i);  
	}       
}

int main(){
	Paluno tabela[MAX];
	inicia();
	recebe(0);
	verifica(0);
	retira(0);
	 
	return 0; 
}
