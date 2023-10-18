#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N1, N2, N3, N4;

    printf("Digite a nota 1: ");
    scanf("%d", &N1);

    printf("Digite a nota 2: ");
    scanf("%d", &N2);

    printf("Digite a nota 3: ");
    scanf("%d", &N3);

    int nota_final = somaTrimestre(N1, N2, N3);

    printf("A nota final do aluno foi de %d\n", nota_final);

    if(nota_final < 70)
    {
        printf("\nO aluno foi reprovado!");
    }else
    printf("\nO aluno passou de ano!\n");

    system("pause");
    return 0;
    
}

int somaTrimestre(int a, int b, int c){

    return (a + b + (c *2));

}
