#include <stdio.h>

int main(void){

    int i;

    printf("O quadrado dos numeros inteiros de 0 a 150:");

    for(i = 0; i <= 150;){
        printf("%d\n", i*i);
        i++;
    }

}