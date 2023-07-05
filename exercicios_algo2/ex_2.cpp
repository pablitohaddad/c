#include <stdio.h>

int main(void){

    int idade; 

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade > 5 && idade <= 10){
        printf("Categoria Infantil");
    }else if(idade > 11 && idade <= 15){
        printf("Categoria Juvenil");
    }else if(idade > 16  && idade <= 20){
        printf("Categoria Junior");
    }else if(idade > 21 && idade <= 25){
        printf("Categoria Profissional");
    }else{
        printf("Categoria nao identificada");
    }


}