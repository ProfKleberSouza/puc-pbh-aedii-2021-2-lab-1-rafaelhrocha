#include <stdio.h>
#include "functions.h"
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[20];
    
    // ENTRADA DE DADOS
    fgets(palavra,50,stdin);
    fflush(stdin);
  
    // PROCESSAMENTO - EXECUTANDO A FUNCAO
    numero_vogais(palavra);
    return(0);
}