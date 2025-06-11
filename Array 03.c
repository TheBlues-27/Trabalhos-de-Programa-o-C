#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// 3) Escreva um programa em C que leia 5 números inteiros em um array, e depois calcule e exiba a média dos elementos. OK

int main() { // Função principal do programa
    float array[5]; // Declara um array de 5 floats para armazenar os números
    float soma = 0.0, media; // Inicializa a variável soma com 0.0 e declara a variável media
    printf("Digite 5 numeros inteiros:\n"); // Solicita ao usuário que digite 5 números inteiros
    for (int i = 0; i < 5; i++) { // Loop para ler 5 números do usuário
        scanf("%d", &array[i]); // Lê um número inteiro e armazena como float no array
        soma += array[i]; // Adiciona o valor lido à variável soma
    }
    media = soma / 5.0; // Calcula a média dividindo a soma por 5.0
    printf("A média dos números informados é: %.2f\n", media); // Exibe a média com duas casas decimais
    return 0; // Indica que o programa terminou com sucesso
}