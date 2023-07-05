#include <stdio.h>

int main(void){

    int numero;

    printf("Digite o numero:");
    scanf("%d", &numero);

    if ((numero % 10 == 0) && (numero % 5 == 0) && (numero % 2 == 0)){
        printf("O numero eh divisivel por 2, 5, 10");
    }else{
         printf("O numero nao eh divisivel por 2, 5 e 10"); 
        }
    
    return 0;
}