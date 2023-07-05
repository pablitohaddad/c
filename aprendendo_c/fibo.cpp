#include <stdio.h>

int main() {
    int primeiro = 0, segundo = 1, proximo;

    printf("Soma dos 100 primeiros números inteiros\n");

    printf("%d\n", primeiro);
    printf("%d\n", segundo);

    for (int i = 1; i <= 100; i++) {
        proximo = primeiro + segundo;
        printf("%d\n", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}
