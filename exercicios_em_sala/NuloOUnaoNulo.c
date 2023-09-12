#include <stdio.h>

int ehNulo(int n);

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (ehNulo(num))
    {
        printf("O numero %d eh nulo", num);
    }
    else{
        printf("O numero %d nao eh nulo", num);
    }
}
int ehNulo(int n){

    if (n == 0)
        return 1;
    else
        return 0;
}