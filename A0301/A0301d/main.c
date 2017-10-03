#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a[5], b[5], c[10], i, cont = 0;

    for (i = 0; i < 5; i++) {
        printf("Insira um número para o vetor A: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Insira um número para o vetor B: ");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            c[i] = a[i - cont];
            cont++;
        } else {
            c[i] = b[i / 2];
        }
    }

    printf("\nVetor C: ");
    for (i = 0; i < 10; i++) {
        printf("\n%d", c[i]);
    }

    return (EXIT_SUCCESS);
}

