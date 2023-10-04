#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;
    int *px = &x;
    int *py = &y;

    printf("Digite o valor de X:");
    scanf("%d", &x);

    printf("Digite o valor de Y:");
    scanf("%d", &y);
    
    if (x > y)
        printf("X eh maior: %d", *px);
    else
        printf("Y eh maior: %d", *py);
    
    
}