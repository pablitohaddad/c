#include <stdio.h>

int main(void){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if ((idade >= 20) && (idade <= 80)){
        printf("Parabens");
    }else{ 
        printf("Sinto muito");
    }
    return 0;

}