#include <stdio.h>
// 2) Escreva um programa em C que leia 8 números inteiros em um array, e depois encontre o maior e o menor valor, bem como suas posições no array. OK

int main(){ // Função principal do programa
    int array[8]; // Declara um array de 8 inteiros
    int maior_valor = 0, menor_valor = 0, posicao_maior = 0, posicao_menor = 0; // Variáveis para armazenar maior/menor valor e suas posições
    printf("Digite 8 numeros inteiros:\n"); // Solicita ao usuário que digite 8 números
    for (int i = 0; i < 8; i++) { // Loop para ler os 8 números
        scanf("%d", &array[i]); // Lê um número inteiro e armazena no array
        if (i == 0) { // Se for o primeiro elemento
            maior_valor = array[i]; // Inicializa maior_valor com o primeiro número
            menor_valor = array[i]; // Inicializa menor_valor com o primeiro número
        } else {
            if (array[i] > maior_valor) { // Se o número atual for maior que o maior_valor
                maior_valor = array[i]; // Atualiza maior_valor
                posicao_maior = i; // Atualiza a posição do maior valor
            }
            if (array[i] < menor_valor) { // Se o número atual for menor que o menor_valor
                menor_valor = array[i]; // Atualiza menor_valor
                posicao_menor = i; // Atualiza a posição do menor valor
            }
        }
    }
    printf("O valor mais alto informado foi: %d\n", maior_valor); // Exibe o maior valor
    printf("O valor mais alto informado esta na posicao: %d\n", posicao_maior); // Exibe a posição do maior valor
    printf("O valor mais baixo informado foi: %d\n", menor_valor); // Exibe o menor valor
    printf("O valor mais baixo informado esta na posicao: %d\n", posicao_menor); // Exibe a posição do menor valor
    return 0; // Indica que o programa terminou com sucesso
}