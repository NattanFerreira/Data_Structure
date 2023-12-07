#include <stdio.h>
#include <stdlib.h>
int main(){
    int tamanho = 5, novo_tamanho;
    int *vetor = (int*) malloc(tamanho*sizeof(int));
    printf("Digite o novo tamanho:\n");
    scanf("%d", &novo_tamanho);
    vetor = (int *) realloc(vetor, novo_tamanho*sizeof(int));
    if (vetor ==NULL )
    {
        printf("Erro");
        exit(1);
    }
    free(vetor);
    return 0;
}