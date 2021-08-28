#include <stdio.h>
#include "functions.h"

int main() {
    char palavra[50];
    
    // ENTRADA DE DADOS
    fgets(palavra,50,stdin);
    fflush(stdin);
  
    // PROCESSAMENTO - EXECUTANDO A FUNCAO
    inverte(palavra);
    return(0);
}