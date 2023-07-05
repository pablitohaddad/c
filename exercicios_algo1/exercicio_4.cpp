#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int numero_lado;

    printf("Digite o lado de um quadrado: ");
    scanf("%d", &numero_lado);

    int perimetro = numero_lado * 4;
    int area = pow(numero_lado, 2);

    printf("O perimetro do quadrado eh %d\n", perimetro);
    printf("A area do quadrado eh %d\n", area);

    system("pause");
    return 0;
}


