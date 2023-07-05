#include <stdio.h>

int main(void){

    int idade;

    printf("Digite a sua idade: "); 
    scanf("%d", &idade);
    
    if (idade < 16){
        printf("Nao eleitor");
    }       
    else if (idade >= 18 and idade <= 65){
        printf("Eleitor obrigatorio");
    }
    else{
        printf("Eleitor facultativo");
    }
    
}