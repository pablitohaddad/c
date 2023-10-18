#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct Funcionario
    {
        int idade;
        char nome[40];
        float salario;
        
    }secretaria, zelador, gerente;

    printf("Digite a idade da secretaria: ");
    scanf("%d", &secretaria.idade);
    fflush(stdin); // limpa o buffer stdin no windows

    printf("Insira o nome da secretaria: ");
    scanf("%[^\n]s", &secretaria.nome);

    printf("Insira o salario da secretaria: ");
    scanf("%f", &secretaria.salario);

    printf("A idade da secretaria: %d\n", secretaria.idade);
    printf("O nome da secretaria: %s\n", secretaria.nome);
    printf("A idade da secretaria: %.2f\n", secretaria.salario);



}


