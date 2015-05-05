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

void inicia_pont(Paluno tabe[MAX]){
  int i;
  for (i=0;i<MAX;i++){
  	tabe[i]=NULL;
  }
}         
      
void recebe_tabela(Paluno tabela[MAX],int i){
	  if(tabela[i]==NULL){
	  	tabela[i]=(Paluno)malloc(sizeof(Aluno)); 
	  }  
      scanf("%s",tabela[i]->nome);
      scanf("%d",&tabela[i]->mat);
      scanf("%s",tabela[i]->end);
      scanf("%s",tabela[i]->tel);
}

int retira_tabela(Paluno tabela[MAX],int i){   
      free(tabela[i]);   
      tabela[i]=NULL;    
}

int verifica_tabela(Paluno tabela[MAX],int i){
    printf("\n\n%s\n",tabela[i]->nome);
    printf("%d\n",tabela[i]->mat);
    printf("%s\n",tabela[i]->end);
    printf("%s\n",tabela[i]->tel);      
}

void imprime_tab(Paluno tabela[MAX]){
    int i;
    for (i=0;i<MAX;i++){
    	verifica_tabela(tabela,i);       
	}  
}

int main(){
	Paluno tabela[MAX];
	inicia_pont(tabela);
	recebe_tabela(tabela,0);
	verifica_tabela(tabela,0);	 
	
	return 0; 
}
