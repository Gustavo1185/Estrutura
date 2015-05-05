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

void inicia_pont(Paluno tabe[MAX]){
  int i;
  for (i=0;i<MAX;i++){
  	tabe[i]=NULL;
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
      
void recebe_tabela(Paluno tabela[MAX],int i){
	  if(tabela[i]==NULL){
	  	tabela[i]=(Paluno)malloc(sizeof(Aluno)); 
	  }  
      scanf("%s",tabela[i]->nome);
      scanf("%d",&tabela[i]->mat);
      scanf("%s",tabela[i]->end);
      scanf("%s",tabela[i]->tel);
}

      
void retiraint i){   
	  free(tab[i]);   
      tab[i]=NULL;    
}


int retira_tabela(Paluno tabela[MAX],int i){   
      free(tabela[i]);   
      tabela[i]=NULL;    
}


int verifica(int i){
	printf("\n\n%s\n",tab[i]->nome);
	printf("%d\n",tab[i]->mat);
	printf("%s\n",tab[i]->end);
	printf("%s\n",tab[i]->tel); 	       
}

int verifica_tabela(Paluno tabela[MAX],int i){
    printf("\n\n%s\n",tabela[i]->nome);
    printf("%d\n",tabela[i]->mat);
    printf("%s\n",tabela[i]->end);
    printf("%s\n",tabela[i]->tel);      
}

void imprime(){
    int i;
    for (i=0;i<MAX;i++){
    	consulta(i);  
	}       
}

void imprime_tab(Paluno tabela[MAX]){
    int i;
    for (i=0;i<MAX;i++){
    	consulta_tabela(tabela,i);       
	}  
}

int main(){
	
	Paluno tabela[MAX];
	inicia_pont(tabela);
	recebe_tabela(tabela,0);
	verifica_tabela(tabela,0);
	inicia();
	recebe(0);
	verifica(0);
	retira(0);
	scanf("%d"); 
	 
	return 0; 
}
