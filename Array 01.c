#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

//    1) Escreva um programa em C que leia 10 números inteiros em um array, e depois calcule e exiba a soma de todos os elementos. OK

int main() { // Função principal do programa
    int array[5], soma = 0; // Declara um array de 5 inteiros e inicializa a variável soma com 0
    printf("Digite 5 numeros inteiros:\n"); // Solicita ao usuário que digite 5 números inteiros
    for (int i = 0; i < 5; i++) { // Loop para ler 5 números do usuário
        scanf("%d", &array[i]); // Lê um número inteiro e armazena na posição i do array
        soma += array[i]; // Adiciona o valor lido à variável soma
    }
    printf("Os números informados, resultam na soma: %d\n", soma); // Exibe a soma dos números informados
    return 0; // Indica que o programa terminou com sucesso
}