#include <stdio.h>

int main() {
    int range = 100, soma = 0;
    
    for (int contador =0; contador<= range; contador ++){
        if (contador % 2 == 0) {
            soma += contador;
        }
    }
    printf("\nA soma dos numeros pares de 0 a %d e: %d\n", range, soma);
    printf("Fim do programa.\n");
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");
    return 0;
}