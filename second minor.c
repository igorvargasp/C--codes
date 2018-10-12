#include <stdio.h>
#include <stdlib.h>

int novo_menor(int vet[]){
  int x,menor;
for(x=0; x<5; x++){
    if(menor >vet[x]){
      menor=vet[x];
    }
  }
  return menor;
}

int segund_menor(int vet[],int menor){
  int segundo;
  int x;
    for(x = 0; x<5; x++){
      if(vet[x]!=menor && segundo > vet[x]){
        segundo=vet[x];
      }
    }
    return segundo;
}

int main() {
  int vet[5]={2,4,3,1,8};
  int x,menor,segundo;
   menor=novo_menor(vet);
   segundo=segund_menor(vet,menor);

  printf("Menor: %d\n",menor);
  printf("Segundo menor:%d",segundo);
}