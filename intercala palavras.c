
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void troca(char A[], char B[], char C[]){
int i=0, j=0;
int x=0;
int k=0;
int tamanho;

gets(A);
gets(B);
tamanho=strlen(A)+strlen(B);
for(i,j,k; k<tamanho; k++){

          if(k%2==0){
               C[k]=A[i];
					i++;	
		  }else{
             C[k]=B[j];
               j++;
}	

}
puts(C);
}
main(){
char teste[20];
char tested[20];
char tesd[80];

troca(teste,tested,tesd);
	
	

	
	
}

