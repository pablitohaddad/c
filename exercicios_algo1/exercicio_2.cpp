#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    int soma = num1 + num2 + num3;
    printf("A soma dos numero eh: %d\n", soma);

    int subtracao = num1 - num2 - num3;
    printf("A subtracao dos numeros eh: %d\n", subtracao);

    int multiplicacao = num1 * num2 * num3;
    printf("A multiplicacao dos numeros eh: %d\n", multiplicacao);

    float media = (num1 + num2 + num3) / 3;
    printf("A media dos numeros eh: %2.f\n", media);
    
    system("pause");
    return 0;
}