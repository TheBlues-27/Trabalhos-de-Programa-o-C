#include <stdio.h>

//  6) Leia 12 números reais e armazene-os em um array. Em seguida, calcule a média dos 12 valores, mostre todos os valores que são maiores que a média e calcule novamente a média apenas desses valores que são maiores que a média.

int main(){
    float numeros[12]; // Declara um array para armazenar 12 números reais
    float soma = 0.0, media, soma_maiores = 0.0; // Variáveis para soma e média
    int i, contador_maiores = 0; // Variáveis auxiliares

    // Leitura dos números
    for (i = 0; i < 12; i++) { // Loop para ler 12 números
        printf("Digite o %dº número: ", i + 1); // Solicita ao usuário o número
        scanf("%f", &numeros[i]); // Lê o número digitado e armazena no array
        soma += numeros[i]; // Acumula a soma dos números
    }

    media = soma / 12; // Calcula a média dos 12 valores
    printf("Média dos valores: %.2f\n", media); // Exibe a média calculada

    printf("Valores maiores que a média:\n"); // Mensagem inicial para os valores maiores que a média

    // Exibição dos números maiores que a média
    for (i = 0; i < 12; i++) { // Loop para percorrer todos os números do array
        if (numeros[i] > media) { // Se o número é maior que a média
            printf("%.2f ", numeros[i]); // Exibe o número
            soma_maiores += numeros[i]; // Acumula a soma dos maiores
            contador_maiores++; // Conta quantos números são maiores que a média
        }
    }

    if (contador_maiores > 0) { // Verifica se existem números maiores que a média
        float media_maiores = soma_maiores / contador_maiores; // Calcula a média dos maiores
        printf("\nMédia dos valores maiores que a média: %.2f\n", media_maiores); // Exibe a média dos maiores
    } else {
        printf("\nNenhum valor é maior que a média.\n"); // Mensagem caso não haja valores maiores que a média
    }

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}