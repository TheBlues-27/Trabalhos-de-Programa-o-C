#include <stdio.h>
// 2) Escreva um programa em C que leia 8 números inteiros em um array, e depois encontre o maior e o menor valor, bem como suas posições no array. OK

int main(){
    int array[8];
    int maior_valor = 0, menor_valor = 0, posicao_maior = 0, posicao_menor = 0;
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &array[i]);
        if (i == 0) {
            maior_valor = array[i];
            menor_valor = array[i];
        } else {
            if (array[i] > maior_valor) {
                maior_valor = array[i];
                posicao_maior = i;
            }
            if (array[i] < menor_valor) {
                menor_valor = array[i];
                posicao_menor = i;
            }
        }
    }
    printf("O valor mais alto informado foi: %d\n", maior_valor);
    printf("O valor mais alto informado esta na posicao: %d\n", posicao_maior);
    printf("O valor mais baixo informado foi: %d\n", menor_valor);
    printf("O valor mais baixo informado esta na posicao: %d\n", posicao_menor);
    return 0;
}