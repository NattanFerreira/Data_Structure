#include <stdio.h> //print scan
#include <stdlib.h> //malloc, callor
int main(void){
    int tamanho = 5;
    int *vetor = (int*) malloc(tamanho*sizeof(int));
    if (vetor == NULL){
        printf("Erro");
        exit(1); //aborta execução
    }else{
        printf("Sucesso\n");
    }
    //ler os dados do vetor
    printf("Digite os valores do vetor:\n");
    for (int contador = 0; contador < tamanho; contador++)
    {
        scanf("%d", vetor+contador); //&vetor[contador]
    }
    free(vetor);
    return 0;
}