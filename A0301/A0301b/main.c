#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char nomes[10][50];
    char enderecos[10][50];
    int i, num = 1;

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº nome: ", i + 1);
        gets(nomes[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº endereço: ", i + 1);
        gets(enderecos[i]);
    }

    while ((num >= 1) && (num <= 10)) {
        printf("\nInsira um número para ser buscado no vetor: ");
        scanf("%d", &num);

        while ((num < 1) || (num > 10)) {
            printf("\nValor de busca inválido! Tente novamente!");
            printf("\nInsira um número para ser buscado no vetor: ");
            scanf("%d", &num);
        }

        printf("Nome: %s. Endereço: %s", nomes[num-1], enderecos[num-1]);
    }

    return (EXIT_SUCCESS);
}

