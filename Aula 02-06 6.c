#include <stdio.h>

int main(){
    int inteiros[5];

    printf("Digite 5 numeros inteiros:\n");
    for(int i = 0; i < 5; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &inteiros[i]);
    }
    printf("Os numeros digitados foram:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", inteiros[i]);
    }
    printf("\nFim do programa.\n");
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");
    return 0;
}