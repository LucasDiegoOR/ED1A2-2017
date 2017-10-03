#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char nomeArq[] = "nomes.txt";
    char ch1[10][10];
    FILE *arq;
    int n = 0;

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro! Não foi possível abrir o arquivo!\n");
    } else {
        while ((fscanf(arq, "%s\n", &ch1[n])) != EOF && n < 10) {
            printf("%s\n", ch1[n]);
            n++;
        }
    }
    
    fclose(arq);

    return (EXIT_SUCCESS);
}