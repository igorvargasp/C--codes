#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int pilha[MAX];
int inicio,fim;

int pilhaCheia(){
	return (fim == MAX); 	
}
int pilhaVazia(){
	printf("Pilha vazia");
	return (inicio == fim);
}
void push(int x){
	if( !pilhaCheia() ){
		pilha[fim++] = x;
	}else{
	printf("Pilha cheia \n");	
	}
}
int pop(){
	int aux;
	if( !pilhaVazia() ){
		aux=pilha[fim-1];
		fim--;
		return aux;
		}else{
			printf("Pilha vazia \n");
		return -1;	
		}
	}
void exibe(int pilha[MAX]){
	int x;
	for( x=0; x < fim; x++){
		printf("%d",pilha[x]);
	}
}

main(){
	inicio = 0;
	fim = 0;
	int escolha,valor;
	do{
	printf("\n1 EMPILHA:\n");
	printf("\n2 DESEMPILHA:\n");
	printf("\n3 Mostra o topo:\n");
	printf("\n4 Verifica se a pilha esta vazia:\n");
	printf("\n5 Sair:\n");
	scanf("%d",&escolha);
	int x;
	switch(escolha){
		case 1:
			printf("Escolha o valor:");
			scanf("%d",&valor);
			push(valor);
			break;
			case 2:
			printf("%d",pop());
			break;
			case 3:
			exibe(pilha);	
			break;
			case 4:
				pilhaVazia();
			break;
			default:
				break;
	}
	
	}while( escolha != 5);	
		
}
