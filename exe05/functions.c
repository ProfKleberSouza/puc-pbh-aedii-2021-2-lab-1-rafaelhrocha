
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char texto[]){
    int i, aux, fim, tam = strlen(texto);
    char *novo = malloc((tam + 1) * sizeof(char));

    fim = tam - 1;
    for(i = 0; i < tam; i++){
        novo[fim] = texto[i];
        fim--;
    }
    novo[i] = '\0';
    printf("%s",novo);
}
