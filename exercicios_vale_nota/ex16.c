#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura[10], soma_altura = 0;
    for(int i = 0; i < sizeof(altura)/sizeof(float); i++)
    {
        printf("Digite a altura do jogador %d: ", i + 1);
        scanf("%f", &altura[i]);
        soma_altura += altura[i];
    }

    float media = soma_altura / (sizeof(altura)/sizeof(float));
    printf("\nA media dos jogadores foi de %.2f\n", media);

    for (int i = 0; i < sizeof(altura)/sizeof(float); i++)
    {    
        if (altura[i] > media)
        {
            printf("O jogador [%u] tem a altura maior que a media\n\n", i + 1);
        }
    }
    system ("pause");
    return 0;
}