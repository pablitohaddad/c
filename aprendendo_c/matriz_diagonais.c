#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 3, m = 5;
    float notas[n][m], media[n], acm=0;
    char nome[n][30];

    for(int i = 0; i < n; i++)
    {
        printf("Digite o nome do aluno: %d", (i+1));
        scanf("%[^\n]s", nome[i]);
        for (int j = 0; j < m; j++){
            
            printf("Digite a nota do aluno: %d", (j+1));
            scanf("%f", notas[j]);
            
             
        }
        
    }    

}