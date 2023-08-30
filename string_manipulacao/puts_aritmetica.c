//put+s = colocar + string
/*Imprime a partir de uma posi��o dentro de um vetor de caracter*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[80];
    printf("\n\nInsira o seu nome: ");
    gets(nome);
    /*vetor 'nome' aponta para primeira posição do vetor. Quando efetuo a adição estou deslocando o endereço de impressão*/
    printf("Seu sobrenome eh = %s\n",nome+2);

    //system("PAUSE");
    return 0;
}