/*TEORIA - Retorna: Um size_t (longo inteiro sem sinal) com o valor da quantidade de caracteres daquela string. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //usada para strlen()
int main()
{
    int len,i;
    char nome[80];
    printf("\n\nInsira o seu nome: ");
    //gets(nome);
    scanf("%[^\n]s",nome);
    //strlen(string); retorna quantos caracteres tem a string
    len = strlen(nome);
    printf("\nQuantas letras = %d\n",len);
    /*laço vai percorrer todas as posições da string + 4 depois do fim da string*/
    for(i=0; i < len +4; i++)
        /*nome+i vai incrementando o endereço, senão mostra apenas o endereço da primeira posição*/
        printf("Endereco = %u\tChar = %c\tDec =%d\n",
               (unsigned) (nome+i), nome[i],(int)nome[i]);
    //system("PAUSE");
    return 0;
}


/* SAÍDA NO CONSOLE
Insira o seu nome: jose
Quantas letras = 4
Endereco = 1643685792   Char = j        Dec =106
Endereco = 1643685793   Char = o        Dec =111
Endereco = 1643685794   Char = s        Dec =115
Endereco = 1643685795   Char = e        Dec =101
Endereco = 1643685796   Char =  Dec =0
Endereco = 1643685797   Char = U        Dec =85
Endereco = 1643685798   Char =  Dec =0
Endereco = 1643685799   Char =  Dec =0
*/