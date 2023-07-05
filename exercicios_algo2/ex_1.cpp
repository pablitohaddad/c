#include <stdio.h>

int main(void){

    int numero;

    printf("\nCasado(1), Solteiro(2), Divorciado(3)\n");
    printf("Digite em qual situacao voce se encontra: ");
    scanf("%d", &numero);

    if (numero == 1){
        printf("Sua situacao: Casado");
    }else if(numero == 2){
        printf("Sua situacao: Solteiro");
    }else if(numero == 3){
        printf("Sua situacao: Divorciado");
    }else{
        printf("Situacao nao encontrada.");
    }

}