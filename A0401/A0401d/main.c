#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    printf("Informe um número natural: ");
    scanf("%d", &num);

    printf("O número %d em binário é: ", num);
    binario(num);

    return (EXIT_SUCCESS);
}

void binario(int n) {
    if (n <= 1) {
        printf("%d", n);
    } else {
        if ((n > 1) && (n <= 3)) {
            printf("%d", n / 2);
            printf("%d", n % 2);
        } else {
            binario(n / 2);
            printf("%d", n % 2);
        }
    }
}