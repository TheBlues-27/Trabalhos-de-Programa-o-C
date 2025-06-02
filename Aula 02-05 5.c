
int main(){
    int numero, somapar = 0, somaimpar = 0, contador;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }
    for (contador = 1; contador <= numero; contador++) {
        if (contador % 2 == 0) {
            somapar += contador;
        } else {
            somaimpar += contador;
        }
    }
    printf("A soma dos numeros pares de 1 a %d e: %d\n", numero, somapar); 
    printf("A soma dos numeros impares de 1 a %d e: %d\n", numero, somaimpar);
    printf("Fim do programa.\n");   
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");
    return 0;
}