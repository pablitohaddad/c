/*
//scanf() n�o consegue ler Espa�o ent�o para e esse espa�o
� guardado no BUFFER.
*/
#include <stdio.h>
int main()
{
    char nome[21], datanascimento[11], nomeMae[21];
    int idade;

    printf("Nome completo: ");
    scanf("%[^\n]s", nome);
    setbuf(stdin,NULL);

    printf("Insira data Nascimento: ");
    scanf("%[^\n]s", datanascimento);
    setbuf(stdin,NULL);

    printf("Idade: ");
    scanf("%d",&idade);
    setbuf(stdin,NULL);
    
    printf("Nome da mae: ");
    scanf("%[^\n]s",nomeMae);
    setbuf(stdin,NULL);

    printf("Ola Senhor(a) %s. Bem-vindo.\n", nome);
    printf("Sua idade: %d \n",idade);
    printf("Sua data de nascimento: %s \n", datanascimento);
    printf("Nome da mae:  %s \n", nomeMae);
    return 0;
}

/*Execute o código e verifique o que acontece.
Aqui, ao ler o \n - (ENTER) esse enter é guardado no buffer STDIN e quando
quando a função scanf() aguarda o usuário digitar um valor, encontra o \n 
no buffer, logo lê esse valor e o coloca na próxima variável.
*/