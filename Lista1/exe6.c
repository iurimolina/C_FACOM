/// Leia a dimensão do raio de um círculo e calcule e mostre a área do mesmo. Lembre-se
/// que área = (pi ∗ raio2). 

#include<stdio.h>
#include<math.h>

int main(){
    float raio, area;
    printf("Raio: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio, 2);
    printf("Dimensao do circulo: %f\n", area);

    return 0;
}