#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char nomes[10][50];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº nome: ", i + 1);
        gets(nomes[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("\nÍndice %d - nome: %s", i, nomes[i]);
    }

    return (EXIT_SUCCESS);
}

