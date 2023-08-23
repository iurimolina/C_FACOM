/// Leia três notas e seus respectivos pesos, calcule e mostre a média aritmética entre elas. 

#include<stdio.h>

int main(){
    float n1, n2, n3;
    int p1, p2, p3;
    float nota;

    printf("Nota 1: \n");
    printf("Peso 1: \n");
    printf("Nota 2: \n");
    printf("Peso 2: \n");
    printf("Nota 3: \n");
    printf("Peso 3: \n");
    scanf("%f%d%f%d%f%d", &n1, &p1, &n2, &p2, &n3, &p3);

    nota = (n1*p1 + n2*p2 + n3*p3) / 3;
    printf("A Media Aritmetica e: %f\n", nota);

    return 0;
}