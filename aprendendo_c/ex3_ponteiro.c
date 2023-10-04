#include <stdio.h>
#include <stdlib.h>

int main(){

    float x[10];

    for(int t=0; t<10; t++){

        printf("Posicao %d do endereco %p\n", t, &x[t]);

    }

    return 0;


}