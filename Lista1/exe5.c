/// Leia os valores correspondentes à base e altura de um triângulo e calcule e mostre a
/// área do mesmo. Lembre-se que área = (base ∗ altura)/2. 

#include<stdio.h>

int main(){
    float base, altura, area;

    printf("Base: ");
    printf("Altura: ");
    scanf("%f%f",&base, &altura);

    area = (base * altura) / 2;
    printf("A Area e: %f", area);


    return 0;
}