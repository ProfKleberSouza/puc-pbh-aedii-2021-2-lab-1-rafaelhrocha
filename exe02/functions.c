
#include "functions.h"

int menor(int v[], int n){
    if( n == 1 ){
        return v[0];
    }

    int m = menor( v + 1, n - 1 );

    return ( v[0] < m ) ? v[0] : m;

}
