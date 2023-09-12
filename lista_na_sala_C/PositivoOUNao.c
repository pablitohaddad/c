#include <stdio.h>

int ehPositivo(int n);

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (ehPositivo(num))
    {
        printf("O numero %d eh positivo", num);
    }
    else{
        printf("O numero %d eh negativo", num);
    }
}
int ehPositivo(int n){

    if (n > 0)
        return 1;
    else
        return 0;
}