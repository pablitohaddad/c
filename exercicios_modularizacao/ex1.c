#include <stdio.h>
#include <stdlib.h>

float mediaDeQuatro(float a, float b, float c, float d)
{

    return (a + b + c + d) / 4;
   
}

int main()
{

    float N1, N2, N3, N4;

    printf("Digite a nota 1: ");
    scanf("%f", &N1);

    printf("Digite a nota 2: ");
    scanf("%f", &N2);

    printf("Digite a nota 3: ");
    scanf("%f", &N3);

    printf("Digite a nota 4: ");
    scanf("%f", &N4);

    float media = mediaDeQuatro(N1, N2, N3, N4);
    printf("A media dos quatro numeros eh: %.2f \n", media);

    system("pause");
    return 0;
}