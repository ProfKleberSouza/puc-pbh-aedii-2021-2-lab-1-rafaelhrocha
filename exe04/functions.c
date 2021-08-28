
#include "functions.h"
void numero_vogais(char texto[]){

    int tam = strlen(texto),A = 0, E = 0, I = 0, O = 0, U = 0;
    
    for( int i = 0; i<tam; i++){
        if(toupper(texto[i]) == 'A'){
            A++;
        }
        else if(toupper(texto[i]) == 'E'){
            E++;
        }
        else if(toupper(texto[i]) == 'I'){
            I++;
        }
        else if(toupper(texto[i]) == 'O'){
            O++;
        }
        else if(toupper(texto[i]) == 'U'){
            U++;
        }
    }
    
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d",A,E,I,O,U);
}
