#include <stdio.h>

int valueDelta(int n, int j, int k);

int main()
{
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("O valor de delta eh %d", valueDelta(a, b, c));

    return 0;

}
int valueDelta(int n, int j, int k){

    float delta = (n*n) -4 * j * k;
    return delta;
    
}