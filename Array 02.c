#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[8];
    int maior_valor = 0, menor_valor = 0;
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &array[i]);
        if (i == 0) {
            maior_valor = array[i];
            menor_valor = array[i];
        } else {
            if (array[i] > maior_valor) {
                maior_valor = array[i];
            }
            if (array[i] < menor_valor) {
                menor_valor = array[i];
            }
        }
    }
    printf("O valor mais alto informado foi: %d\n", maior_valor);
    printf("O valor mais baixo informado foi: %d\n", menor_valor);
}