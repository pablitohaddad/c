#include <stdio.h>
#include <math.h>

int main(void){

    int numero, quadrado_numero;
    float raiz_numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    quadrado_numero = numero * numero; 
    raiz_numero = sqrt(numero);

    if (numero > 0){
        printf("O seu numero eh positivo, portanto a raiz quadrada dele eh aproximadamente: %.2f", raiz_numero);
    }
    else if (numero < 0){
        printf("O seu numero eh negativo, portanto o quadrado dele eh: %d", quadrado_numero);
    }
    else{
        printf("O numero 0 nao eh nem negativo, nem positivo ;)");
    }  

}