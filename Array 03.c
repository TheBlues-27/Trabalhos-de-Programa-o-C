#include <stdio.h>
// 3) Escreva um programa em C que leia 5 números inteiros em um array, e depois calcule e exiba a média dos elementos. OK
int main() {
    float array[5];
    float soma = 0.0, media;
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        soma += array[i];
    }
    media = soma / 5.0;
    printf("A média dos números informados é: %.2f\n", media);
    return 0;
}