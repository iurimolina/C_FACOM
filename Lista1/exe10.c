/// Leia valores correspondentes a um depósito e dois saques e, em seguida, calcule o
/// saldo final, sabendo que cada operação custa 0.38 por cento do valor sacado. 

#include<stdio.h>

int main(){
    float saque1, saque2, deposito;
    float taxa;

    printf("Qual o valor do deposito:\n");
    printf("Qual o valor do primeiro saque:\n");
    printf("Qual o valor do segundo saque:\n");
    scanf("%f%f%f", &deposito, &saque1, &saque2);

    taxa = deposito - (saque1+saque2) - ((saque1 * 0.38) + (saque2 * 0.38));

    printf("O saldo final e de %.2f", taxa);

    return 0;
}