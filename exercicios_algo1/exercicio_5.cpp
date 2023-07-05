#include <stdio.h>
#include <stdlib.h>

int main (void){

    float salario, percentual_aumento;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor percentual do aumento: ");
    scanf("%f", &percentual_aumento);

    float percentual_em_racional = percentual_aumento / 100;
    float reajuste = salario * percentual_em_racional;
    float salario_reajustado = salario + reajuste;

    printf("O seu salario era de R$%2.f\n", salario);
    printf("O seu atual salario eh de R$%.2f\n", salario_reajustado);
    printf("Voce teve um ganho de R$ %2.f\n", reajuste);

    system("pause");
    return 0;
}