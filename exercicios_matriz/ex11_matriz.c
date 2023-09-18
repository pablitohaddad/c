#include <stdio.h>

int main() {
    int matrizA[3][4];
    int matrizB[3][4];

    printf("Digite os valores para a matriz A (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrizA[i][j] = i + i;
        }
    }

    // Passo 2: Gerar a matriz B (triplo da matriz A)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrizB[i][j] = 3 * matrizA[i][j];
        }
    }

    // Passo 3: Imprimir a matriz B
    printf("Matriz B (triplo da matriz A):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
