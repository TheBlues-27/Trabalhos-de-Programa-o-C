#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius *(9.0 / 5.0)) + 32.0;
    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);
    printf("Fim do programa.\n");
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");
    return 0;
}