#include <stdio.h>
#include <stdlib.h>

int main(){

    float num[10];

    for(int i = 0; i < sizeof(num)/sizeof(float); i++){

        printf("Digite numero %d --> ", i+1);
        scanf("%f", &num[i]);
        num[i] = num[i] / 2;

    }

    for(int i = 0; i < sizeof(num)/sizeof(float); i++){

        printf("A metade do numero [%u] eh %.2f\n", i + 1, num[i]);

    }

}