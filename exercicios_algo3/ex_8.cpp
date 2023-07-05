#include <stdio.h>

int main(void){

    int i, n1 = 0, n2 = 1, proximo;

    printf("A soma dos 100 primeiros numeros inteiros:\n");

    for(i = 1; i <= 100;){

        proximo = n1 + n2;

        printf("%d\n", proximo);
        n1 = n2;
        n2 = proximo;
        i++;
    }

}