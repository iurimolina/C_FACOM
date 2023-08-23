/// Leia o salário de um funcionário e uma porcentagem, calcule e mostre o novo salário,
/// sabendo-se que este sofreu o aumento da porcentagem informada. 

#include<stdio.h>

int main(){
    float salario, porcentagem;
    float novo_salario;

    printf("Salario: \n");
    printf("Porcentagem: \n");
    scanf("%f%f",&salario, &porcentagem);
    
    novo_salario = salario * porcentagem + salario;
    printf("Novo salario: %f", novo_salario);


    return 0;
}