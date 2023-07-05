#include <stdio.h>
#include <string.h>

int main(void){

    int i, j, k;
    char palavra1[20], palavra2[20], palavra3[20];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    printf("As palavras na ordem inversa:\n");

    for ( i = strlen(palavra1) - 1; i >= 0; i--) {
        printf("%c", palavra1[i]);

    }printf("\n");
    for ( j = strlen(palavra2) - 1; j >= 0; j--) {
        printf("%c", palavra2[j]);

    }printf("\n");
    for ( k = strlen(palavra3) - 1; k >= 0; k--) {
        printf("%c", palavra3[k]);
        
    }printf("\n");
}
