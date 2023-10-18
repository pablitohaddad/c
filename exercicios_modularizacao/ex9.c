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

    }l1, l2, l3;
    

    printf("Digite a lado 1 do triangulo: ");
    scanf("%d", &l1.L1);

    printf("Digite a lado 2 do triangulo: ");
    scanf("%d", &l2.L2);

    printf("Digite a lado 3 do triangulo: ");
    scanf("%d", &l3.L3);

    if (trianguloValido(l1.L1, l2.L2, l3.L3))
    {
        printf("O triangulo eh valido, e a sua area eh %d \n", Area(l1.L1, l2.L2, l3.L3));

    }else if (!(trianguloValido(l1.L1, l2.L2, l3.L3)))
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
