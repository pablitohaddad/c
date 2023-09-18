#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {7, 8, 9},
        {4, 5, 6},
        {1, 2, 3}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz girada 90 graus no sentido anti-horario:\n");
    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
