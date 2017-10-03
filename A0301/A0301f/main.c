#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m[3][3], mt[3][3], i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe o valor para a %dª linha e %dª coluna: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
            mt[j][i] = m[i][j];
        }
    }
    
    printf("\nMatriz Transposta:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", mt[i][j]);
        }
    }
    
    return (EXIT_SUCCESS);
}

