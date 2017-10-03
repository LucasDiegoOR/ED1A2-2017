/* Exemplo de função com passagem de parâmetros */
#include <stdio.h>
#include <stdlib.h>

/* Variáveis globais */
int global1, global2, global3;

int main(int argc, char** argv) {
    /* Diferentes chamadas à função soma, passando parâmetros */
    printf("A soma de 10 com 20 é: %d \n", soma(10, 20));
    global1 = 100;
    global2 = 200;
    printf("A soma de global1 e global2 é: %d \n", soma(global1, global2));
    global3 = soma(1000, 2000);
    printf("A soma de 1000 com 2000 (global3) é: %d \n", global3);

    return (EXIT_SUCCESS);
}

/* Função soma 
 * Espera dois parâmetros do tipo inteiro
 * O número de parâmetros e o tipo depende da necessidade
 * Tipo de retorno é inteiro
 * Realiza a soma de dois números inteiros
 * Parâmetros: num1 e num2 - números a serem somados
 * Retorno: resultado da soma
*/
int soma(int num1, int num2) {
    int r; /* Variáveis locais à função soma */

    r = num1 + num2;

    return r; /* Retorno da função soma */
}

