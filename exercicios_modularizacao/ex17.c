#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct informacaoAluno
    {
        char nome[100];
        int numeroMatricula;
        int ano;
        char turno[15];
    }aluno;
    
    struct  cargaHoraria
    {
        int algoritmo;
        int laboratorioProgramacao;
        int fundamentosMatematica;
        int ingles;
        int introComputacao;
        int producaoTexto;
    }horas;

    strcpy(aluno.nome, "Pablo Arruda");
    aluno.numeroMatricula = 22441;
    aluno.ano = 2023;
    strcpy(aluno.turno, "vespertino");
    horas.fundamentosMatematica = horas60(horas.fundamentosMatematica);
    horas.ingles = horas60(horas.ingles);
    horas.introComputacao = horas60(horas.introComputacao);
    horas.producaoTexto = horas60(horas.producaoTexto);
    horas.algoritmo = horas30(horas.algoritmo);
    horas.laboratorioProgramacao = horas30(horas.laboratorioProgramacao);

    printf("\n*** Informacoes do Aluno ***\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Numero de Matricula: %d\n", aluno.numeroMatricula);
    printf("Ano: %d\n", aluno.ano);
    printf("Turno: %s\n", aluno.turno);

    printf("\n*** Carga Horaria ***\n");
    printf("Algoritmo: %d horas\n", horas.algoritmo);
    printf("Laboratorio de Programacao: %d horas\n", horas.laboratorioProgramacao);
    printf("Fundamentos de Matematica: %d horas\n", horas.fundamentosMatematica);
    printf("Ingles: %d horas\n", horas.ingles);
    printf("Introducao a Computacao: %d horas\n", horas.introComputacao);
    printf("Producao de Texto: %d horas\n", horas.producaoTexto);

}

int horas60(x)
{
    return 60;
}

int horas30(x)
{
    return 30;
}