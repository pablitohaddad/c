#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[100];

    for(int i = 0; i <= sizeof(num)/sizeof(int); i++){

        if (i % 2 == 0)
            num[i] = 1;
        else
            num[i] = 0;       
    }

    for (int i = 0; i < sizeof(num)/sizeof(int); i++){

        printf("Vetor [%u] = %d \n", i + 1,  num[i]);

    }

    system("pause");
    return 0;

}