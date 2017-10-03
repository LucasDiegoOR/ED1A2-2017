#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int matriz[5][5];
    float coluna[5], linha[5];
    int i, j, somal, somac;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor para a %dª linha e %dª coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            somal = 0;
            somal = somal + matriz[i][j];
            linha[i] = linha[i] + somal;

            somac = 0;
            somac = somac + matriz[i][j];
            coluna[j] = coluna[j] + somac;
        }
    }

    printf("\nMatriz informada:");
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
    }

    printf("\nSoma de cada linha:");
    for (i = 0; i < 5; i++) {
        printf("\n%0.1f", linha[i]);
    }
    
    printf("\nSoma de cada coluna:");
    for (j = 0; j < 5; j++) {
        printf("\n%0.1f", coluna[j]);
    }
    
    return (EXIT_SUCCESS);
}

