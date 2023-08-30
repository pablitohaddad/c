/*strcmp - Compara duas cadeias de caracteres. Nesse contexto, string1 
é dita ser "maior que" string2 se o primeiro caracter não-coincidente 
em string1 tiver um código ASCII maior que o caracter correspondente na string2.

Sintaxe:
        strcmp(str1, str2);
retorna:     
        0 - se String1 for igual a String2
        <0  Se string1 for menor que string2
        >0  Se string1 for maior que string2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //usada para strcat()
int main()
{
    char resposta[] ="BRANCO";
    char resp[40];
    printf("\nQual eh a cor do cavalo Branco de Napoleao: ");
    scanf("%[^\n]s",resp);
    while(strcmp(resp,resposta) != 0){
        setbuf(stdin,NULL);
        printf("Resposta errada. Tente de novo: ");
        scanf("%[^\n]s",resp);
    }
    printf("Correta a resposta");
    //system("PAUSE");
    return 0;
}