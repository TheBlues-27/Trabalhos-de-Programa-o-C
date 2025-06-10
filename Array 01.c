#include <stdio.h>

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