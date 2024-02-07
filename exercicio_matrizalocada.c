#include<stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 5, colunas = 5, i = 0, j = 0;
    //alocando vetor de ponteiros
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    //alocando cada lina da matriz
    for ( i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) malloc (colunas*sizeof(int));
    }
    for ( ; i < j; i++)
    {
        matriz[i][j] = i
    }
    for (; j < i; j++)
    {
        matriz[j][i] = 
    }
    return 0;
}