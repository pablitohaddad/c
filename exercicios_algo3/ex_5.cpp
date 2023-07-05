#include <stdio.h>
#include <string.h>

int main(void){

    int i;
    char nome[20];
    
    printf("Digite o seu nome: ");
    fgets(nome, 20, stdin);
    
    printf("O seu nome de tras pra frente:\n");

    for ( i = strlen(nome) - 1; i >= 0; i--) {
        printf("%c", nome[i]);

    }
}