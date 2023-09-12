#include <stdio.h>
#include <stdlib.h>

int main(){

    int N[5], menor_numero = 100;

    for(int i = 0; i < sizeof(N)/sizeof(int); i++){

        printf("Digite o numero [%u]", i + i);
        scanf("%d", &N[i]);

        if(N[i] < menor_numero){
            menor_numero = N[i];
        }

    }

}