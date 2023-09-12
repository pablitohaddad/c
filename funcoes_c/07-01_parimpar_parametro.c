/*Criar uma funcao que receba um numero e retorne 1 se for par e 0 se for impar
Crie na funcao main mensagens que mostrem se o numero eh par ou impar*/

#include <stdio.h>
#include <stdlib.h>

/* definicao da variavel*/
int ehParImpar(int n);

int main()
{
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if(ehParImpar(num))
    {
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }

    return 0;

}
/*Definicao eh par eh impar*/
int ehParImpar(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}
/*ctrl + shift + i*/


