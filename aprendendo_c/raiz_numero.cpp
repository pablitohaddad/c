#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    raiz = sqrt(numero);

    printf("A raiz quadrada de %.2f eh %.2f.\n", numero, raiz);

    return 0;
}
