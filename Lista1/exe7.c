/// Leia um valor correspondente a uma medida em pés, e mostre as conversões para:
/// polegadas, jardas e milhas, sabendo que: 1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha
/// = 1.760 jardas.


#include<stdio.h>

int main(){
    int i;
    float polegadas, milhas;
    float jardas;

    printf("Medida em pes: ");
    scanf("%d", &i);

    polegadas = i * 12;
    jardas = i / 3;
    milhas = jardas / 1760;
    
    printf("Valor em Polegadas: %.2f\n", polegadas);
    printf("Valor em Jardas: %.2f\n", jardas);
    printf("Valor em MIlhas: %.2f\n", milhas);

    return 0;
}