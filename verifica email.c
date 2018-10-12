    #include <stdio.h>
    #include <string.h>
     
    int main(void) {
     
      char email[50]={"a@xyasds.se"};
      int tam=strlen(email);
      int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;
     
      for (i = 0; i < tam; i++) {
        char c = email[i];	
        if(c == '@') {	//compara até achar o arroba
          if (arroba!=0)
            break; // não pode ter uma segunda @
          arroba = 1;	//se o @ for diferente de 0
          if (i < 3)
            break; // se @ vier antes de 3 caracteres, erro
        }
        else if (arroba!=0) { // se já encontrou @
          if (ponto!=0) { // se já encontrou . depois de @
            depoisPonto++;	//começa contar
          }
          else if(c == '.') {	//procura o ponto
            ponto = 1;
            if (antesPonto < 3) {
              break; // se . depois de @ vier antes de 3 caracteres, erro
            }
          }
          else {
            antesPonto++;
          }
        }
      } // for
     
      if (i == tam && depoisPonto > 1)
        printf("Valido");
      else
        printf("Invalido");
    }
     
