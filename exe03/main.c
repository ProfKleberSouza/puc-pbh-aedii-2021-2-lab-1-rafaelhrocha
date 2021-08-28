#include <stdio.h>
#include "functions.h"

int main() {

    int tam, menor, maior;
    
    // ENTRADA DE DADOS
    scanf("%d", &tam);
    
    int v[tam];
    
    // PROCESSAMENTO - EXECUTANDO A FUNCAO
    for ( int i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }
    
    menor_maior(v, tam, &menor, &maior);
    
    // SAIDA - IMPRIMINDO O RESULTADO
    printf("MENOR = %d\nMAIOR = %d", menor, maior);
    
    
    return(0);
}