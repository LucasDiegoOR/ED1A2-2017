/* Fatorial Recursivo */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    printf("Informe o N: ");
    scanf("%d", &num);
    printf("Fatorial de %d = %d", num, fatorial(num));

    return (EXIT_SUCCESS);
}

int fatorial(int n) {
    if (n <= 1) { /* Condição de parada da recursividade */
        return 1; /* Já garante  F0 e F1 = 1 (valor por definição) */
    } else {
        return n * fatorial(n - 1); /* Ponto da recursividade */
    }
}

