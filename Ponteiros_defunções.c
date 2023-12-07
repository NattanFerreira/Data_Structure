#include <stdio.h>
int soma(int a, int b){
    return a+b;
}
int subtracao(int a, int b){
    return a-b;
}
int divisao(int a, int b){
    return a/b;
}
int multiplicacao(int a, int b){
    return a*b;
}
int calcula(int x, int y, int(*operacao)(int, int)){
return (*operacao)(x,y);
}
int main(){
    printf("Digite a operação:\n1- Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n");
    int operacao, n1, n2, resultado;
    scanf("%d", &operacao);
    printf("Digite o primeiro e o segundo numero para a operacao desejada:\n");
    scanf("%d%d", &n1,&n2);
    switch (operacao)
    {
    case 1:
    resultado = calcula(n1, n2, soma);
        break;
    case 2:
    resultado = calcula(n1, n2, subtracao);
        break;
    case 3:
    resultado = calcula(n1, n2, multiplicacao);
        break;
    case 4:
    resultado = calcula(n1, n2, divisao);
        break;
    default:
    printf("Operação invalida");
        break;
    }
    printf("Resultado: %d", resultado);
    return 0;
}