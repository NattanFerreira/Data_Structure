#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *vetor = malloc(3*sizeof(int));
    if(vetor==NULL){
        printf("Erro");
        exit(1);
    } else{ 
    printf("Alocacao bem sucedida");}
    free(vetor);
    return 0;
}