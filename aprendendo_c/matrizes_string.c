#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[5][100];

    for(int i = 0; i < 5; i++){

        printf("Digite um nome: ");
        scanf("%[^\n]s", nome[i]);
        fflush(stdin);
    }

    for(int i = 1; i < 5; i++){
        printf("Nome do aluno: \n%s", nome[i]);
    }

}