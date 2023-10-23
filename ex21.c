#include <stdio.h>

void lerVetor(int vetor[], int n)
{
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
}

void imprimirPositivo(int vetor[], int n)
{
    printf("Numeros positivos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > 0)
        {
            printf("%d\n", vetor[i]);
        }
        
    }
    
}


int main()
{

    int n;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    lerVetor(vetor, n);
    imprimirPositivo(vetor, n);
}