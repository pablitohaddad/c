#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[51];

    printf("NUMEROS INTEIROS DE 0 A 50");

    for (int i = 0; i <= 50; i++)
    {
        num[i] = i;
    }
    for (int i = 0; i <= 50; i++){
        printf("%d --> ", num[i]);
    }

    system("pause");
    return 0;
    
}