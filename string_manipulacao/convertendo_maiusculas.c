//put+s = colocar + string
/*Imprime a partir de uma posi��o dentro de um vetor de caracter*/
#include <stdio.h>
#include <stdlib.h>

void strupr(char a[]){
   int i;
   char maiuscula[80];
   for(i=0;a[i] != '\0';i++){
        maiuscula[i]= (a[i] >= 97 && a[i]<=124) ? a[i]-32 : a[i];
   }
    printf("\n\n%s\n\n",maiuscula);
}

int main()
{
    char nome[80];
    printf("\n\nInsira uma string: ");
    scanf("%[^\n]s",nome);

    strupr(nome);

    //system("PAUSE");
    return 0;
}
