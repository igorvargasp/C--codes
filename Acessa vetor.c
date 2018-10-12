#include <stdio.h>
#include <stdlib.h>

void insere(int vet[10]){
	int x,pos,num;
	printf("Digite o numero: ");
	scanf("%d",&num);
	for(x=0; x<10; x++){
	if(x == 9){
	vet[x+1]=num;	
	}	
	}
	for(x=0; x<10; x++){
	printf("%d  ",vet[x+1]);
	}
	
}
void acessa(int vet[10]){
	int x,pos,num;
	printf("Selecione a posição que será acessada: ");
	scanf("%d",&pos);
	for(x=0; x<10; x++){
	if(x == pos){
	num = vet[x];
	printf("Voce acessou o numero %d",num);	
	}	
	}
	
}
void retira(int vet[10]){
	int x,pos,num;
	printf("Selecione um numero: ");
	scanf("%d",&num);
	for(x=0; x<10; x++){
	if(vet[x] == num){
	vet[x]=vet[x-1];	
	 vet[x]=0;
	}	
	}
	for(x=0; x<10; x++){
		printf("%d  ",vet[x]);
	}
}

void altera(int vet[10]){
	int x,pos,num;
	printf("Digite o numero que deseja alterar: ");
	scanf("%d",&num);
	printf("Digite o novo numero: ");
	int novo;
	scanf("%d",&novo);
	for(x=0; x<10; x++){
	if(vet[x] == num){
	vet[x]=novo;	
	}	
	}
	for(x=0; x<10; x++){
	printf("%d  ",vet[x]);
	}
}
void acoes(int vet[10], int y){
	if(y ==1){
		insere(vet);
		printf("\nVoce inseriu um numero\n");	
	}else if(y == 2){
		acessa(vet);
	printf("\nVoce acessou um numero\n");		
	}else if(y == 3){
		retira(vet);
		printf("\nVoce retirou um numero\n");	
	}else if(y == 4){
		altera(vet);
	printf("\nVoce alterou um numero\n");		
	}	
}
	


main(){
	int vet[10]={10,20,30,40,50,60,70,80,90,100},x;
	for(x=0; x<10; x++){
		printf("%d  ",vet[x]);
	}
	printf("\nSelecione uma das opçoes\n ");
	printf("1 para inserir um numero\n ");
	printf("2 Para acessar um numero\n ");
	printf("3 para retirar um numero\n ");
	printf("4 para alterar um numero\n ");
	int y;	
	scanf("%d",&y);
	acoes(vet,y);	
}

