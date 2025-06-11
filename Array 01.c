#include <stdio.h>
//    1) Escreva um programa em C que leia 10 números inteiros em um array, e depois calcule e exiba a soma de todos os elementos. OK

int main() {
    int array[5],soma = 0;
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        soma += array[i];
    }
    printf("Os números informados, resultam na soma: %d\n", soma);
    return 0;
}