#include<stdio.h>

int main(){
    int n_mat;
    int hrs;
    int valor;
    int num_filhos;
    float bonus;
    int salario;

    printf("Numero de matriculas: \n");
    printf("\nHoras trabalhadas mensais: \n");
    printf("\nValor por hora: \n");
    printf("\nNumero de filhos: \n");
    scanf("%d%d%d%d", &n_mat, &hrs, &valor, &num_filhos);

    bonus = num_filhos * 0.1;
    salario = valor * bonus + valor;
    printf("\nO empregado %d, que possui %d filhos, devera receber um bonus de %.2f, seu salario deve ser de %d", n_mat, num_filhos, bonus, salario);

    return 0;
}