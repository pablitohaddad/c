#include <stdio.h>

int main() {
    int matriz[10][10];

    // Preencher a matriz usando loops for
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j + 1;
        }
    }

    // Imprimir os elementos abaixo da diagonal secundária
    printf("Elementos abaixo da diagonal secundaria:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
