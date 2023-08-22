#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[4];

    for(int i = 0; i < sizeof(notas)/sizeof(float); i++){

        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);

    }
    for(int i = 0; i < sizeof(notas)/sizeof(float); i++){

        printf("Nota [%u] = %.2f\n", i + 1, notas[i]);
    }
    
    

}