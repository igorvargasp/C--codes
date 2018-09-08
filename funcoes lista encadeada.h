lista* concatena (lista* l1, lista2* l2)
{
     lista* p;   /* variável auxiliar para percorrer a lista */
     lista* q;   /* variável auxiliar para criar a nova lista */

        if (l1 == NULL) 
        return l2;

        p = l1;   
          do   		//funcao que cocatena uma lista encadeada
          { 
             q = p; 
             p = p->prox;
          } 
          while(p != NULL);

        q->prox = l2;

return l1;
}


lista *insere(lista *p, int valor){
	
	lista *novo;
	novo=(lista*)malloc(sizeof(lista));
	novo->dado = valor;
	novo->prox = p;
	return novo;						//funcao de insercao
		
}


void imprime(lista *l){
	lista *p = l;
	for(p = l; p != NULL; p=p->prox){
		printf("%d-",p->dado);			//funcao de impresao
	}
	
	
}


lista *pos(lista *l, int posicao, int valor){
	lista *novo, *p = l;
	novo = (lista*)malloc(sizeof(lista));
	int x=1;
	while( x != posicao && p!= NULL ){
	p = p->prox;
	x++;								//funcao de selecionar a posicao que sera inserido o numero
	}
	novo->dado = valor;
	novo->prox = p->prox;
	p->prox = novo;
	return l;	

}






lista *ordemCrescente(lista *p){
    lista *ant = NULL;
    lista *novo = p;
    int num;
    
    while(novo != NULL){				//ordena a fila em crescente
    	ant = novo;
    	while(ant != NULL){
    		if(novo->dado > ant->dado){
    			num = novo->dado;
    			novo->dado = ant->dado;
    			ant->dado= num;	
			}
			
    		ant = ant->prox;
		} 	
    	novo = novo->prox;
	}
   
    
    return p;

}

lista *retiraFirst(lista *l){
	lista *tmp = l;
	tmp = l->prox;
	l->prox = tmp->prox;
	l->prox--;
	return tmp;
	
						//retira o primeiro	
}


lista *retiraLast(lista *l){
	
	lista *ultimo = l,
	*penultimo = l;
			 
	while(ultimo->prox != NULL){
		penultimo = ultimo;
		ultimo = ultimo->prox;
		
	}
	penultimo->prox = NULL;
	ultimo->prox= penultimo;
	return ultimo;

								//retira o ultimo;	
	
}
gia paige





lista * inserirFinal(lista* p, int valor){
      if (p->prox == NULL) {
        p->dado = valor;
      } else {
        lista * tmp = NULL;
        for(tmp=p; tmp->prox != NULL; tmp=tmp->prox);
        lista * novo = (lista*)malloc(sizeof(lista));
        novo->dado = valor;
        novo->prox = NULL;
        tmp->prox = novo;				//insere no final
      }
      return p;
}





