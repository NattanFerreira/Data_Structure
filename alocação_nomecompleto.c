#include <stdio.h>
#include <stdlib.h>
int main(void){
    char *nome = (char*) malloc(50*sizeof(char));
    if (nome == NULL )
    {
        exit(1);
    }
    printf("Digite seu nome: \n");
    scanf("%[^\n]", nome);
    printf("Seu nome é:\n");
    for (int i = 0; i < ; i++)
    {
        
    }
    
    free(nome);
    return 0;
}