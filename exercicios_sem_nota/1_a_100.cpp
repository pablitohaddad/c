#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[101];

    for(int i = 0; i <= 100; i++)
    {
        num[i] = i;
    }

    for(int i = 0; i <= 100; i++)
    {
        printf("%d --> ", num[i]);
    }

    system("pause");
    return 0;

}