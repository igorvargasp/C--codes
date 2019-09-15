#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct ListaDupla{
	struct ListaDupla *ant;
	struct ListaDupla *prox;
	int numero;
	
};


typedef struct ListaDupla *lista;
typedef struct ListaDupla dados;


lista* aloca(){
	lista *li =(lista*)malloc(sizeof(lista));
	*li = NULL;
	return li;
}

insercao(lista *li, dados d){
	dados *no =(dados*)malloc(sizeof(dados));
	no->numero = d.numero;
	no->prox = (*li);
	no->ant = NULL;
	if(*li!=NULL){
	 (*li)->ant = no;		
	}
	*li = no;
	
}

imprime(lista *li){
	dados *p = *li;
	while(p!=NULL){
		printf("%d->",p->numero);
		p = p->prox;
	}
	
	
	printf("%d",p->numero);
	
}

	
deleta(lista *li,int num){
	dados *p = *li;
	
	while(p!=NULL && p->numero!=num){
		
		p = p->prox;
	}
	if(p == NULL){
		return 0;
	}
	if(p->ant ==NULL){
		*li = p->prox;
	}else{
		p->ant->prox = p->prox; 
	}
	
	free(p);
}
	


main(){
	
	lista *li=aloca();
	dados d;
	d.numero = 10;
	insercao(li,d);
	d.numero = 20;
	insercao(li,d);
	d.numero = 40;
	insercao(li,d);
	d.numero = 50;
	insercao(li,d);
	deleta(li,50);
	imprime(li);
	
	
	
	
	
	
	
	
	
	
	
}
