/* Exemplo de procedimento com passagem de parâmetro por referência */
#include <stdio.h>
#include <stdlib.h>

int global1, global2, global3;

int main(int argc, char** argv) {
    global1 = 1;
    global2 = 2;
    global3 = 3;
    processaNumeros(global1, global2, &global3);
    printf("Valor de global1 após processaNumeros é: %d \n", global1);
    printf("Valor de global2 após processaNumeros é: %d \n", global2);
    printf("Valor de global3 após processaNumeros é: %d \n", global3);

    return (EXIT_SUCCESS);
}

/* *num3 é passada por referência */
void processaNumeros(int num1, int num2, int *num3) {
    num1 *= 10;
    num2 *= 100;
    *num3 *= 1000;
    /* Em seu contexto/escopo, a sub-rotina altera o valor dos três
     * parâmetros recebidos 
    */
    printf("Em processaNumeros (global1 -> num1) vale: %d \n", num1);
    printf("Em processaNumeros (global2 -> num2) vale: %d \n", num2);
    printf("Em processaNumeros (global3 <-> num3) vale: %d \n", *num3);
}