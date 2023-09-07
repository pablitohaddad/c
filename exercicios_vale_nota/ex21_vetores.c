#include <stdio.h>
#include <stdlib.h>

int main(){

    int temperatura[121];
    int maior_temperatura = 40, menor_temperatura = 15;
    int soma_temperaturas = 0, conta_temperaturas = 0;

    for(int i = 0; i < sizeof(temperatura)/sizeof(int); i++){

        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%d", &temperatura[i]);

        soma_temperaturas += temperatura[i];

        if (temperatura[i] < maior_temperatura)
        {
            maior_temperatura = temperatura[i];
        }
        if (temperatura[i] > menor_temperatura)
        {
            menor_temperatura = temperatura[i];
        }

    }

    float media_temperaturas = soma_temperaturas / (sizeof(temperatura)/sizeof(int));

    for(int i = 0; i < sizeof(temperatura)/sizeof(int); i++)
    {
        if (temperatura[i] < media_temperaturas)
        {
            conta_temperaturas++;
        }
        
    }
    
    printf("Maior temperatura: %d\n", menor_temperatura);
    printf("Menor  temperatura: %d\n", maior_temperatura);
    printf("Temperatura media: %.2f\n", media_temperaturas);
    printf("Dias com temperaturas inferiores a media: %d\n", conta_temperaturas);

}