#ifndef FILAESTATICA2_H
#define FILAESTATICA2_H

#include <stdio.h>
#include <stdlib.h>

#define SIM 1 // Dependendo da versão do compilador C o tipo booblean
#define NAO 0 // Não existe. Isto é uma alternativa usando int
#define SUCESSO 0 // Um apelido para o padrão de sucesso da execução
#define FILA_CHEIA 1 // Um apelido para o valor que expresse Fila Cheia
#define MAX_ELEM 10 // Nº máximo de elementos na fila
#define FILA_VAZIA -1 // Valor que indica Fila Vazia. Pode ser associado
// ao início da fila (front) indicando que está vazia
#define ELEM_NULO 0 // Valor de elemento nulo em C

// Estrutura de dados

struct Fila {
    int inicio; // Índice da célula do vetor que representa o início da fila
    int fim; // Índice da célula do vetor que representa o final da fila
    char elem[MAX_ELEM]; // Elementos da fila
};

// Protótipos das operações

int vazia(struct Fila); // Empty
int cheia(struct Fila); // Full
void iniciarFila(struct Fila*); // Setup
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); // Enqueue
char remover(struct Fila*); // Dequeue
char tamanho(struct Fila); // Size

#endif /* FILAESTATICA2_H */

