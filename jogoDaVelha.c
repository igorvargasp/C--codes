#include <stdio.h>
#define player1 0
#define player2 1
int cont;

void diagonal (int matriz[][3]){
	if(matriz[0][0] == player1 && matriz[1][1]==player1 && matriz[2][2] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][0] == player2 && matriz[1][1]==player2 && matriz[2][2] == player2){
	printf("O jogador 2 ganhou");}}
	
void diagonalCont (int matriz[][3]){
	if(matriz[0][2] == player1 && matriz[1][1]==player1 && matriz[2][0] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][2] == player2 && matriz[1][1]==player2 && matriz[2][0] == player2){
	printf("O jogador 2 ganhou");}}	
	
void lateralesq (int matriz[][3]){
	if(matriz[0][0] == player1 && matriz[1][0]==player1 && matriz[2][0] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][0] == player2 && matriz[1][0]==player2 && matriz[2][0] == player2){
	printf("O jogador 2 ganhou");}}
	
void lateraldir (int matriz[][3]){
	if(matriz[0][2] == player1 && matriz[1][2]==player1 && matriz[2][2] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][2] == player2 && matriz[1][2]==player2 && matriz[2][2] == player2){
	printf("O jogador 2 ganhou");}}
	
void meio(int matriz[][3]){
	if(matriz[0][1] == player1 && matriz[1][1]==player1 && matriz[2][1] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][1] == player2 && matriz[1][1]==player2 && matriz[2][1] == player2){
	printf("O jogador 2 ganhou");}}
	
void lateralAcima(int matriz[][3]){
	if(matriz[0][0] == player1 && matriz[0][1]==player1 && matriz[0][2] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[0][0] == player2 && matriz[0][1]==player2 && matriz[0][2] == player2){
	printf("O jogador 2 ganhou");}}
	
void lateralAbaixo(int matriz[][3]){
	if(matriz[2][0] == player1 && matriz[2][1]==player1 && matriz[2][2] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[2][0] == player2 && matriz[2][1]==player2 && matriz[2][2] == player2){
	printf("O jogador 2 ganhou");}}

void lateralMeio(int matriz[][3]){
	if(matriz[1][0] == player1 && matriz[1][1]==player1 && matriz[1][2] == player1){
	printf("O jogador 1 ganhou");
	}else if(matriz[1][0] == player2 && matriz[1][1]==player2 && matriz[1][2] == player2){
	printf("O jogador 2 ganhou");}}			

main(){
	int j,l;
	int matriz[3][3]={player2,player1,player2,
                      player1,player2,player1,
                      player1,player2,0};
	do{		
	diagonal(matriz);
	diagonalCont(matriz);
	lateralesq(matriz);
	lateraldir(matriz);
	meio(matriz);
	lateralAcima(matriz);
	lateralAbaixo(matriz);
	lateralMeio(matriz);
	cont++;
	if(cont==8){
		printf("Deu empate");
	}
	}while(cont!=8);
}
