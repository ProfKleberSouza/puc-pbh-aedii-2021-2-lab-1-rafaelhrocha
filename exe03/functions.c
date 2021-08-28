
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){
     int mr, mn;
    for (int i = 0; i<n; i++){
        if (i == 0){
            mr = v[0];
            mn = v[0];
        }
        else{
            if( v[i] > mr){
                mr = v[i];
            }
            if( v[i] < mn){
                mn = v[i];
            }
        }
    }
    
    *menor = mn;
    *maior = mr;
}
