#include <stdio.h>

int main(){
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }
    printf("Fim do programa.\n");
    printf("Aula 02-06\n");
    printf("Aluno: Bruno Gabriel Caetano de Oliveira\nMatricula: 202502310226\n");    
    return 0;
}