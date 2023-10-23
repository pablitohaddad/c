#include <stdio.h>
#include <stdlib.h>

int valorPrestacoes(float x, float y, int z)
{
    float precoSemEntrada = x - y;
    float valorPrestacoes = precoSemEntrada / z;
    return valorPrestacoes;
}


int main()
{
    struct Financiamento
    {
        float valorImovel;
        float valorEntrada;  
        int numeroPrestacoes; 
        
    }Imovel;

    printf("Digite o preco total do imovel: ");
    scanf("%f", &Imovel.valorImovel);

    printf("Digite o valor de entrada: ");
    scanf("%f", &Imovel.valorEntrada);

    printf("Digite a quantidade de prestacoes: ");
    scanf("%d", &Imovel.numeroPrestacoes);

    float valorPagar = valorPrestacoes(Imovel.valorImovel, Imovel.valorEntrada, Imovel.numeroPrestacoes);

    for (int i = 0; i < (Imovel.numeroPrestacoes); i++)
    {
        printf("[%d] prestacao --> %.2f \n", i + 1, valorPagar);
    }
    
    system("pause");
    return 0;
}

