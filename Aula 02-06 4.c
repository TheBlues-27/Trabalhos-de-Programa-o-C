#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Números primos menores que %d:\n", num);
    for (int i = 2; i < num; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Fim do programa.\n");
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");
    return 0;
}
