#include <stdio.h>

int main() {
    int valor, total = 0, contador = 0;
    float media;

    printf("Digite os valores (negativo para encerrar):\n");

    while (true) {
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        }

        total += valor;
        contador++;
    }

    if (contador > 0) {
        media = (float) total / contador;
        printf("Total do somatorio: %d\n", total);
        printf("Media: %.2f\n", media);
        printf("Total de valores lidos: %d\n", contador);
    } else {
        printf("Nenhum valor fornecido.\n");
    }

    return 0;
}
