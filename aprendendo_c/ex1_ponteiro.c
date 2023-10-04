#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=2, y=1;
    int *px = &x;
    int *py = &y;
    
    if(&x > &y)
        printf("End x: %d\n", px);
    else
        printf("End y: %d", px);

    
    printf("Numero x: %d\n", *px);
    printf("Numero y: %d\n", *py);

    return 0;

}