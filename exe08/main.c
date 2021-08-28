#include <stdio.h>
#include "functions.h"

int main() {

  char palavra[50];
	bool palindromo;
  
  // ENTRADA DE DADOS
  scanf("%s", &palavra);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  palindromo = is_palindromo(palavra);

  // SAIDA - IMPRIMINDO O RESULTADO
	if (palindromo == true) {
		printf("SIM", palindromo);
	}
  else{
		printf("NAO", palindromo);
	}

  return(0);
}