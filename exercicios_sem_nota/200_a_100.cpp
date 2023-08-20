#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[201];

    for(int i = 200; i >= 100; i--){

        num[i] = i;

    }

    for (int i = 200; i >= 100; i--){

        printf("%d --> ", num[i]);
    }

    system("pause");
    return 0;

}