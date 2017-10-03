#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m1[3][3], m2[3][3], m3;
    int i, j, op;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe o valor para a matriz 1 - %dª linha e %dª coluna: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe o valor para a matriz 2 - %dª linha e %dª coluna: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Insira a operação desejada (1 - Adição | 2 - Subtração | 3 - Multiplicação): ");
    scanf("%d", &op);

    if (op == 1) {
        m3 = adicao(m1, m2);
    } else if (op == 2) {
        m3 = subtracao(m1, m2);
    } else if (op == 3) {
        m3 = multiplicacao(m1, m2);
    } else {
        printf("Operação inválida!");
    }

    return (EXIT_SUCCESS);
}

void adicao(int ma1[3][3], int ma2[3][3]) {
    int soma[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = ma1[i][j] + ma2[i][j];
        }
    }

    printf("\nSoma das matrizes:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
    }
}

void subtracao(int ma1[3][3], int ma2[3][3]) {
    int subtracao[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            subtracao[i][j] = ma1[i][j] - ma2[i][j];
        }
    }

    printf("\nSubtração das matrizes:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", subtracao[i][j]);
        }
    }
}

void multiplicacao(int ma1[3][3], int ma2[3][3]) {
    int multiplicacao[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            multiplicacao[i][j] = ma1[i][j] * ma2[i][j];
        }
    }

    printf("\nMultiplicação das matrizes:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", multiplicacao[i][j]);
        }
    }
}
