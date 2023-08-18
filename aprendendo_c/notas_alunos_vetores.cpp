#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[4];

    for(int i = 0; i <= 5; i++){

        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i <= 5; i++){

        printf("Nota do aluno %d = %.2f \n", i+1, notas[i]);  
    }
    system("pause");
    return 0;
}