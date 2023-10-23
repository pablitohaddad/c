#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    struct Triangulo
    {
        int L1;
        int L2;
        int L3;

    }triangulo;
    

    printf("Digite a lado 1 do triangulo: ");
    scanf("%d", &triangulo.L1);

    printf("Digite a lado 2 do triangulo: ");
    scanf("%d", &triangulo.L2);

    printf("Digite a lado 3 do triangulo: ");
    scanf("%d", &triangulo.L3);

    if (trianguloValido(triangulo.L1, triangulo.L2, triangulo.L3))
    {
        printf("O triangulo eh valido, e a sua area eh %d \n", Area(triangulo.L1, triangulo.L2, triangulo.L3));

    }else if (!(trianguloValido(triangulo.L1, triangulo.L2, triangulo.L3)))
    {
        printf("O triangulo nao eh valido\n");
    }

    system("pause");
    return 0;
    
}

int Area(int x, int y, int z)
{
    int T = (x + y + z) / 2;
    int Area = sqrt(T * (T - x) * (T - y) * (T - z));
    return Area;

}

int trianguloValido(int x, int y, int z)
{
    if ((x < y + z) && (y < x + z) && (z < x + y))
    {
        return 1;
    }else
        return 0;
    
}
