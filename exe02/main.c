#include <stdio.h>
#include "functions.h"

int main() {

  int a, r;
  
  // ENTRADA DE DADOS
  scanf("%d", &a);

  int b[a];

  for( int i = 0; i < a; i++){
    scanf("%d", &b[i]);
  }
  
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  r = menor(b, a);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", r);

  return(0);
}