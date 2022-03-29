// S00000050 - Faça um algoritmo que leia um valor N, representando o lado de um quadrado, e calcule e escreva a área do quadrado.
#include <stdio.h>

void main(){
    int lado, area;
    printf("valor do lado do quadrado: ");
    scanf("%d, &lado");
    area = lado*lado;
    printf("o valor da área é: ", area);
}
