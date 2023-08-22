#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[201];

    for(int i = 100; i < sizeof(num)/sizeof(int); i++){

        num[i] = i;

    }

    for (int i = 100; i < sizeof(num)/sizeof(int); i++){

        printf("%d --> ", num[i]);
    }

    system("pause");
    return 0;

}