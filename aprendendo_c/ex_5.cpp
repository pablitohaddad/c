#include <stdio.h>


int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("Nome de tras para frente: ");
    for (int i = strlen(nome) - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
