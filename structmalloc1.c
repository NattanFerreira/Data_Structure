#include<stdio.h>
#include<stdlib.h>
//definindo a estrutura aluno
struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};
//alocação dinamica de struct pois a variavel agora é ponteiro
int main(void){
    struct aluno *estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL)
    {
        exit(1);
    }
     
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", estudante.nome);
    printf("Digite a idade:\n");
    scanf("%d", &estudante.idade);
    printf("Digite a matricula:\n");
    scanf("%d", &estudante.matricula);
    printf("Digite o email:\n");
    scanf(" %[^\n]", estudante.email);
return 0;
}