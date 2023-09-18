#include <stdio.h>

int main() {
    int numPlantas;
    char nomes[50][100];
    int estoqueIdeal[50];
    int estoqueAtual[50];

    // Passo 1: Ler o número de plantas a serem cadastradas (até 50)
    printf("Digite o número de plantas a serem cadastradas (até 50): ");
    scanf("%d", &numPlantas);

    // Passo 2: Cadastrar as plantas
    for (int i = 0; i < numPlantas; i++) {
        printf("Digite o nome da planta %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite o estoque ideal para %s: ", nomes[i]);
        scanf("%d", &estoqueIdeal[i]);

        printf("Digite a quantidade em estoque para %s: ", nomes[i]);
        scanf("%d", &estoqueAtual[i]);

        // Verificar se é necessário comprar mais
        int quantidadeComprar = estoqueIdeal[i] - estoqueAtual[i];
        if (quantidadeComprar > 0) {
            printf("Para %s, comprar %d unidades.\n", nomes[i], quantidadeComprar);
        }
    }

    return 0;
}
