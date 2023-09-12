#include <stdio.h>

int ehImparPar(int n);
int ehMult4(int n);

int main()
{
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if(ehImparPar(num) && ehMult4(num))
    {
        printf("O numero %d eh par e multiplo de 4\n", num);
    }
    else
    {
        printf("O numero %d ou nao eh par ou nao eh multiplo de 4", num);
    }

    return 0;

}
int ehMult4(int n){
    if(n % 4 == 0)
        return 1;
    else
        return 0;
}
int ehImparPar(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}