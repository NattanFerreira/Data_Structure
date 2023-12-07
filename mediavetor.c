#include<stdio.h>
#include<stdlib.h>
float media(int tamanho, int *vetor){
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    return soma/tamanho;
}