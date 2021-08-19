
#include "functions.h"

int menor(int v[], int n){
    int menor;
    for (int i = 0; i < n; i++){
        if( i = 0 ){
            menor = v[i];
        }
        else if( menor < v[i]){
            menor = v[i];
        }
    }
    return menor; 
}
