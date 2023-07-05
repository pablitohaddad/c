#include <stdio.h>

int main(void){

    char nome[20];
    char sexo;
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu sexo[M/F]: ");
    scanf(" %c", &sexo);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'F' && idade < 25){
        printf("%s ---> ACEITA\n", nome);
    }else{
        printf("%s ---> NAO ACEITA\n", nome);
    }

}