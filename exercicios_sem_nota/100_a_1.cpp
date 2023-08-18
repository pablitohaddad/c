#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[101];

    for(int i = 100; i >= 1; i--)
    {
        num[i] = i;
    }

    for (int i = 100; i >= 1; i--)
    {
        printf("%d --> ", num[i]);
    }
    
    return 0;

}


