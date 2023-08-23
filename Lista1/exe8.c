/// Leia dois números inteiros e calcule o primeiro número elevado à potência do segundo.
/// Depois, calcule a raiz quadrada do resultado. 

#include<stdio.h>
#include<math.h>

int main(){
    int i, j;
    int calc1, calc2;

    printf("Digite um numero: \n");
    scanf("%d%d", &i, &j);

    calc1 = pow(i, j);
    calc2 = sqrt(calc1);

    printf("O primeiro numero elevado a potencia do segundo e %d e a raiz quadrada disso e %d", calc1, calc2);

    return 0;
}