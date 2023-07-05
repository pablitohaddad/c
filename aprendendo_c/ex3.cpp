#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Digite os valores, a, b, c de um triangulo: ");
    scanf("%d %d %d", &a, &b, &c); 

    if ((a < b + c) && (b < a + c) && (c < a + b)){
        printf("Isso eh um triangulo"); 
    }else{
        printf("Isso nao eh um triangulo");
    }

}