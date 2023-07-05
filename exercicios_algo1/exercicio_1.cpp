#include <stdio.h>
#include <stdlib.h>

int main (void){

    char nome[20], endereco[20], numero_telefone[20];

    printf("Digite o seu nome: ");
    fgets(nome, 20, stdin);

    printf("Digite o seu endereco:");
    fgets(endereco, 20, stdin);
    
    printf("Digite o seu numero de telfone: ");
    fgets(numero_telefone, 20, stdin);

    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Numero de telefone: %s\n", numero_telefone);

    system("pause");
    return 0;
}
