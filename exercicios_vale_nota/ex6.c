#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[101];

    printf("NUMEROS MULTIPLOS DE 5. DO 1 AO 500\n");

    for(int i = 1; i < sizeof(num)/sizeof(int); i++){

        num[i] = i * 5;

    }

    for (int i = 1; i < sizeof(num)/sizeof(int); i++)
    {
        printf("%d --> ", num[i]);
    }
    
    system("pause");
    return 0;


}