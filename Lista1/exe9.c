/// Leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: a) a idade
/// dessa pessoa; b) quantos anos essa pessoa terá em 2034.

#include<stdio.h>

int main(){
    int i, j;
    int idade, ano;

    printf("Em que ano voce nasceu e em que ano estamos.\n");
    scanf("%d%d", &i, &j);

    idade = j - i;
    ano = 2034 - i;

    printf("Voce tem %d anos e em 2034 tera %d anos", idade, ano);

    return 0;
}