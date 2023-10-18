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
        
    }precoImovel, precoEntrada, prestacoes;

    printf("Digite o preco total do imovel: ");
    scanf("%f", &precoImovel.valorImovel);

    printf("Digite o valor de entrada: ");
    scanf("%f", &precoEntrada.valorEntrada);

    printf("Digite a quantidade de prestacoes: ");
    scanf("%d", &prestacoes.numeroPrestacoes);

    float valorPagar = valorPrestacoes(precoImovel.valorImovel, precoEntrada.valorEntrada, prestacoes.numeroPrestacoes);

    for (int i = 0; i < (prestacoes.numeroPrestacoes); i++)
    {
        printf("[%d] prestacao --> %.2f \n", i + 1, valorPagar);
    }
    

}

