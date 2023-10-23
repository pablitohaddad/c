#include <stdio.h>

void lerVetor(int vetor[], int n)
{
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
}

void imprimirPar(int vetor[], int n)
{
    printf("Numeros pares do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d\n", vetor[i]);
        }
        
    }


}

void imprimirNegativo(int vetor[], int n)
{
    printf("Numeros negativos do vetor:\n");
    for(int i = 0; i < n; i++)
    {
        if (vetor[i] < 0)
        {
            printf("%d", vetor[i]);
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
    imprimirPar(vetor, n);
    imprimirNegativo(vetor, n);
}