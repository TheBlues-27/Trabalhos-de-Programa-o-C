#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// 4) Faça um programa que leia 5 números e os armazene em um array. Depois, mostre os valores na ordem inversa em que eles foram digitados.

int main() { // Função principal do programa
    int array[5]; // Declara um array de 10 inteiros para armazenar os números
    int maior, menor; // Declara as variáveis para armazenar o maior e o menor número
    printf("Digite 5 numeros inteiros:\n"); // Solicita ao usuário que digite 10 números inteiros
    for (int i = 0; i < 5; i++) { // Loop para ler 10 números do usuário
        scanf("%d", &array[i]); // Lê um número inteiro e armazena no array
    }
    
    maior = menor = array[0]; // Inicializa maior e menor com o primeiro elemento do array
    
    for (int i = 1; i < 5; i++) { // Loop para encontrar o maior e o menor número
        if (array[i] > maior) { // Se o número atual é maior que o maior encontrado
            maior = array[i]; // Atualiza o maior
        }
        if (array[i] < menor) { // Se o número atual é menor que o menor encontrado
            menor = array[i]; // Atualiza o menor
        }
    }
    
    printf("Números digitados na ordem inversa:\n"); // Mensagem para indicar a ordem inversa
    for (int i = 5; i >= 0; i--) { // Loop para exibir os números do array de trás para frente
        printf("%d ", array[i]); // Exibe cada número na ordem inversa
    }
    printf("\n"); // Quebra de linha ao final

    return 0; // Indica que o programa terminou com sucesso
}