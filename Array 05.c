#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// 5) Escreva um programa que leia 10 números inteiros, Armazene-os em um array e, em seguida, exiba os valores sem repetições.

int main() {
    int numeros[10]; // Declara um array para armazenar 10 números inteiros
    int i, j, k, repetido; // Declara variáveis auxiliares

    // Leitura dos números
    for (i = 0; i < 10; i++) { // Loop para ler 10 números
        printf("Digite o %dº número: ", i + 1); // Solicita ao usuário o número
        scanf("%d", &numeros[i]); // Lê o número digitado e armazena no array
    }

    printf("Números sem repetições:\n"); // Exibe mensagem inicial

    // Exibição dos números sem repetições
    for (i = 0; i < 10; i++) { // Loop para percorrer todos os números do array
        repetido = 0; // Inicializa a variável de controle de repetição
        for (j = 0; j < i; j++) { // Loop para verificar se o número já apareceu antes
            if (numeros[i] == numeros[j]) { // Se o número atual já apareceu
                repetido = 1; // Marca como repetido
                break; // Sai do loop interno
            }
        }
        if (!repetido) { // Se não foi repetido
            printf("%d ", numeros[i]); // Exibe o número
        }
    }

    printf("\n"); // Quebra de linha ao final da exibição
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}