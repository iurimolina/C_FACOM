// Leia um valor correspondente ao salário mínimo seguido de um valor correspondente
// ao salário de determinado funcionário e calcule e mostre a quantidade de salários
// mínimos que ganha esse funcionário.

#include<stdio.h>

int main(){
    float SALARIO_MIN = 1302;
    int i;
    float salario;

    printf("Qual seu salario: ");
    scanf("%f", &salario);

    i = salario / SALARIO_MIN;
    printf("Esse funcionario ganha %d salario(s) minimo(s)", i);

    return 0;
}