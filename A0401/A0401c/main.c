#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m, n;

    printf("Informe a quantidade de vezes que o número será multiplicado: ");
    scanf("%d", &m);
    printf("Informe o número que será multiplicado: ");
    scanf("%d", &n);

    printf("A multiplicação dos números (usando recursividade) é: %d", multiplicacao(m, n));

    return (EXIT_SUCCESS);
}

int multiplicacao(int m1, int n1) {
    if (n1 == 0) {
        return 0;
    } else if (n1 == 1) {
        return m1;
    } else if (n1 < 0) {
        return - multiplicacao(m1, - n1);
    } else {
        return m1 + multiplicacao(m1, n1 - 1);
    }
}