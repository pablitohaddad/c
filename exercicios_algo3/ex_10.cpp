#include <stdio.h>

int main() {
    int numAlunos = 4;
    float notas[4], media;

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);

        float soma = 0;
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[j]);
            soma += notas[j];
        }

        media = soma / 4;

        if (media >= 7) {
            printf("Aluno %d: Media %.2f - Aprovado\n", i + 1, media);
        } else {
            printf("Aluno %d: Media %.2f - Reprovado\n", i + 1, media);
        }

        printf("\n");
    }

    return 0;
}
