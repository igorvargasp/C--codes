#include <stdio.h>
#include <stdlib.h>

void chama(int valor, int valor2){
	if(valor %2 ==0 ){
		valor = 5;
		printf("valor %d\n",valor);
	}else{
		valor = 1;
		printf("valor %d\n",valor);
	}if(valor2 %2 ==0){
		valor2 = 5;
		printf("valor %d\n",valor2);
	}else{
		valor2 =1;
		printf("valor %d\n",valor2);
	}
}
void recupera (int *valor, int *valor2){
	printf("valor %d e valor2 %d\n",*valor,*valor2);
	
}




main(){
	
	int valor,valor2;
	valor = 10, valor2 = 15;
	chama(valor,valor2);
	recupera(&valor,&valor2);
	
		
	}
	
	
	
	
	
	
	

