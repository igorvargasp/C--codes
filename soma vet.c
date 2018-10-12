#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void MatrizA(int A[][4] ){
int j=1, i=1;
printf("Digite 8 numeros");
for(i=1; i<=4; i++){
    for(j=1; j<=4; j++){
    scanf("%d",&A[i][j]);	
}	
}
	
	
	
}

void MatrizB(int B[][4]){
int i=1,j=1;
printf("Digite 8 numeros");
for(i=1; i<=4; i++){
   for(j=1; j<=4; j++){
       scanf("%d",&B[i][j]);

}

		}		
	
}

void Soma(int A[][4], int B[][4]){
int i=1,j=1;
int C[4][4];	

for(i=1; i<=4; i++){
    for(j=1; j<=4; j++){
C[i][j]=A[i][j]+B[i][j];
printf("[%d][%d]",C[i][j]);

}
printf("\n");
		}		
		
	
}










main(){
int A[4][4];
int B[4][4];
int i=0, j=0;
//for(i=0; i<4; i++){
//for(j=0; j<4; j++){
MatrizA(A);
MatrizB(B);
Soma(A,B);		
}	
//} 	

	
	


	
	






















