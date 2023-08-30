/*strcat - concatena (junta) uma cadeia de caracteres
a outra. Acrescente uma cadeia de caracter ao final da outra
Sintaxe
        strcat(string_destino, string_origem);
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //usada para strcat()
int main()
{
    char salute[100] ="Saudacoes. ";
    char nome[80];
    printf("\n\nInsira o seu nome: ");
    //gets(nome); //usar só no windows
    scanf("%[^\n]s",nome);
    //strcat(dest, orig);
    strcat(salute,nome);
    printf("%s\n",salute);

    return 0;
}
