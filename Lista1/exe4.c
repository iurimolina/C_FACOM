/// Leia o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do
/// rendimento e o valor total depois do rendimento. 

#include<stdio.h>

int main(){
    float deposito, juros, rendimento, total;

    printf("Valor deposito: \n");
    printf("Taxa de juros: \n");
    scanf("%f%f", &deposito, &juros);

    rendimento = juros * deposito;
    total = rendimento + deposito;

    printf("Com o deposito de %.2fR$ e uma taxa de juros de %f, o valor total com o rendimento de %.2f e %.2fR$", deposito, juros, rendimento, total);
    

    return 0;
}