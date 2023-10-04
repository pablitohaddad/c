#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam = 3;
    float x[tam][tam];

    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
        {
            printf("Posicao [%d][%d] na posicao %p\n", i + 1, j + 1, &(x[i][j]));
        }
        




}