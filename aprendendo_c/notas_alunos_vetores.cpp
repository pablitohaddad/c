#include <stdio.h>

int main(){

    float notas[5];

    for(int i = 0; i <= 5; i++){

        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i <= 5; i++){

        printf("Nota do aluno %d = %.2f \n", i+1, notas[i]);  
    }

}