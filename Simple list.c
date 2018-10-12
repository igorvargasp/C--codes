#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int frente,tras;
int fila[MAX];

void fila_Construtor(){
	frente = 0;
	tras = -1;	
}
int fila_Vazia(){
	if(frente > tras){
		return 0;
	}else{
		return 1;
	}
}
int fila_Cheia (){
	if (tras == MAX - 1){
		return 0;
	}else{
		return 1;
	}
}
int fila_Infileirar(int valor){
	if(fila_Cheia()){
		return 0;
	}else{
		tras++;
		fila[tras] = valor;
		return 1;
	}
}
int fila_Desenfileirar(int valor){
	if(fila_Vazia()){
		return 0;
	}else{
	valor = fila[frente];	
	//frente--;
	return 1;
	}
}
int fila_Get(int valor){
	if(fila_Vazia()){
		return 0;
	}else{
	fila[frente] = valor;	
	printf("\nO primeiro da fila eh %d",valor);
	return 1;
	}
}

int fila_Size(){
	return (frente - tras) +1;
}
void fila_Mostra(int fila[MAX]){
	int x;
	for(x = frente; x > 0 ;x--){
		printf("Fila: %d\n",fila[x]);
	}
}



main(){
	int escolha,valor;
	fila_Construtor();
	do{
	printf("\n1 Insere:\n");
	printf("\n2 Remove:\n");
	printf("\n3 Tamanho:\n");
	printf("\n4 Mostra o Primeiro:\n");
	printf("\n5 Mostra a fila:\n");
	scanf("%d",&escolha);
	int x;
	switch(escolha){
		case 1:
			printf("Escolha o valor:");
			scanf("%d",&valor);
			fila_Infileirar(valor);
			break;
			case 2:
			fila_Desenfileirar(valor);
			break;
			case 3:
			printf("\nTamanho da fila eh: %d",fila_Size());
			break;
			case 4:
			fila_Get(valor);
			break;
			case 5:
				fila_Mostra(fila);
				break;
			default:
				break;
	}
	
	}while( escolha != 6);	
	
	
	
	
	
}
