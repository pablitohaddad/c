//put+s = colocar + string
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[80];
    printf("\n\nInsira o seu nome: ");
    gets(nome);
    //puts imprime apenas 1 string por vez e sempre termina com '\n'
    puts("Seu nome e: ");
    puts(nome);

    //system("PAUSE");
    return 0;
}
