#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int numero_sucessor = numero + 1 ;
    int numero_antecessor = numero - 1 ;

    printf("O numero digitado foi %d\n", numero);
    printf("O numero sucessor, entao, eh %d\n", numero_sucessor);
    printf("O numero antecessor, entao, eh %d\n", numero_antecessor);

    system("pause");
    return 0;
}