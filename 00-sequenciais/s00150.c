/*S00000150 - Faça um algoritmo que leia 3 valores reais, notas de um aluno, e escreva sua média
aritmética. A média aritmética de um conjunto de valores é dada pela soma dos valores dividido pela
quantidade de valores considerados.*/

#include <stdio.h>
void main()
{
         float n1, n2, n3, media;
         printf("nota 1: ");
         scanf("%f", &n1);
         printf("nota 2: ");
         scanf("%f", &n2);
         printf("nota 3: ");
         scanf("%f", &n3);
         media = (n1 + n2 + n3)/3;
         printf("média: %f", media);
}
