#include <stdio.h>

int main() {
    int numeros[20];

    // Passo 1: Ler cinco números
    printf("Digite cinco numeros:\n");
    for (int i = 0; i < sizeof(numeros)/sizeof(int); i++) {
        scanf("%d", &numeros[i]);
    }

    // Passo 2: Ordenar os números em ordem crescente (usando Bubble Sort)
    for (int i = 0; i < sizeof(numeros)/sizeof(int); i++) {
        for (int j = 0; j < sizeof(numeros)/sizeof(int)-i; j++) {
            if (numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    // Passo 3: Imprimir os números ordenados
    printf("Numeros ordenados:\n");
    for (int i = 0; i < sizeof(numeros)/sizeof(int); i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
