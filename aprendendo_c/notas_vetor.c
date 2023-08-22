#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[5], media, soma_notas;

    for(int i = 0; i < sizeof(notas)/sizeof(float); i++){

        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);

        soma_notas += notas[i];

    }
    for(int i = 0; i < sizeof(notas)/sizeof(float); i++){

        printf("Nota [%u] = %.2f\n", i + 1, notas[i]);

    }
    media = soma_notas / (sizeof(notas)/sizeof(float));
    printf("Media das notas: %.2f", media);
}