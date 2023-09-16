#include <stdio.h>

int main() {
    int matriz[3][4];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            matriz[i][j] = i + 1;
        }
    }
    for(int i=0; i < 10; i++)
    {
        for(int j=0; j < 10; j++)
        {
            if (j == i)
            {
                printf("%d", matriz[i][j]);
                printf("-");
            }
        }
        printf("\n");
    
    }
}


