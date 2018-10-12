#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct FILA_PRIORIDADE{
	int prioridade;
	int dado;
	struct FILA_PRIORIDADE *prox;
	
}heap;


heap * cria(int num, int prio){
	int cont=-1,nprio;
	cont++;
    	heap *novo=(heap*)malloc(sizeof(heap));
		novo->dado = num;
		novo->prioridade =prio;
	return novo;
}

heap * inserir(heap *h, int dado, int prioridade){
	heap *novo =cria(dado,prioridade);
	heap *ant = NULL;
	heap *p = h;
	while(p!=NULL && p->prioridade <=prioridade){
		ant = p;
		p = p->prox;
	}if(ant == NULL){
		novo->prox =h;
		h = novo;
	}else{
		novo->prox = ant->prox;
		ant->prox = novo;
	}
	return h;
}

heap *delete_(heap *l, int v){
	heap *p = l ;
	heap *ant=NULL;
	while(p!=NULL && p->dado !=v){
		ant = p;
		p = p->prox;
	}
	if(p == NULL){
		return l 
	}if(ant == NULL){
		l = p->prox;
	}else{
		ant->prox = p->prox;
	}
	return l;
}



void imprime(heap *p){
	heap *h = p;
	while(h!=NULL){
	printf("%d-",h->dado);	
	h = h->prox;	
	}
}

main(){
heap *h;
h =NULL;

 h = inserir(h,30,3);   
 h = inserir(h,50,1); 
 h = inserir(h,25,2); 
 imprime(h);  
    
}
