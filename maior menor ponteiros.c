#include <stdio.h>
#include <conio.h>

void atribui(int *p){
	int x;
	for(x=0; x<5; x++){
	scanf("%d",( p + x ));	
	}
}

void atrmaior(int *p){
	int x,maior;
	maior = *p;
	for(x=0; x<5; x++){
	if(*(p + x) > maior){
		maior = *( p + x );
	}	
	}
	printf("Maior eh : %d",maior);
}
void atrmenor(int *p){
	int x, menor;
	menor = *p;
	for(x=0; x<5; x++){
		if(*(p + x) < menor){
			menor = *( p + x );
		}
	}
	printf(" O menor eh %d",menor);
}

main(){
	int vet[5], *p;
	p = &vet;
	atribui(p);
	atrmaior(p);
	atrmenor(p);
	
	
	
	
	
	
	
	
}
