#include <stdio.h>
#include "functions.h"

int main() {

    int x, n, p;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &x, &n);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  p = potencia(x, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("%d\n", p);

  return(0);
}