// Leia um valor correspondente ao custo de um determinado espetáculo teatral e o preço
// do convite individual desse espetáculo e, em seguida, calcule a mostre a quantidade
// mínima de convites que devem ser vendidos para custear o espetáculo.

#include<stdio.h>

int main(){
    float custo, ingresso, valor;
    printf("CUsto do espetaculo: \n");
    printf("CUsto do ingresso: \n");
    scanf("%f%f", &custo, &ingresso);

    valor = custo / ingresso;
    printf("%.2f ingressos vendidos sao necessarios para custear o espetaculo", valor);

    return 0;
}