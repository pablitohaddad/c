#include <stdio.h>

int main() {
    int N;

    // Passo 1: Ler o tamanho da matriz (N)
    printf("Digite o tamanho da matriz (N ≤ 10): ");
    scanf("%d", &N);

    // Verificar se o valor de N está dentro do limite
    if (N > 10) {
        printf("O valor de N deve ser no máximo 10.\n");
        return 1; // Termina o programa com código de erro
    }

    int matriz[N][N];
    int transposta[N][N];

    // Passo 2: Ler os elementos da matriz
    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Passo 3: Calcular a matriz transposta
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Passo 4: Imprimir a matriz transposta
    printf("Matriz Transposta:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
