#include <stdio.h>

int main() {
    char nome[100], sexo;
    int idade;
    
    printf("Digite o seu nome: ");
    fgets(nome, 100, stdin);
    
    printf("Digite o seu sexo (M/F): ");
    scanf("%c", &sexo);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if (sexo == 'F' && idade < 25) {
        printf("O seu nome foi aceito");
    } else {
        printf("O seu nome nao foi aceito");
    }
    
    return 0;
}
