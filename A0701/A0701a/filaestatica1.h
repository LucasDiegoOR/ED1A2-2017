#ifndef FILAESTATICA_H
#define FILAESTATICA_H

#include <stdio.h>
#include <stdlib.h>

#define SIM 1 // Dependendo da versão do compilador C o tipo booblean
#define NAO 0 // Não existe. Isto é uma alternativa usando int
#define SUCESSO 0 // Um apelido para o padrão de sucesso da execução
#define MAX_ELEM 10 // Nº máximo de elementos na fila
#define FILA_VAZIA -1 // Valor que indica Fila Vazia. Pode ser associado
// ao início da fila (front) indicando que está vazia
#define FILA_CHEIA -2 // Um apelido para o valor que expresse Fila Cheia
#define ELEM_NULO 0 // Valor de elemento nulo em C

// Estrutura de dados

struct Fila {
    int tamanho; // Controla quantos elementos tem na fila
    char elem[MAX_ELEM]; // Elementos da fila
};

// Protótipos das operações

int vazia(struct Fila); // Empty
int cheia(struct Fila); // Full
void iniciarFila(struct Fila*); // Setup
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); // Enqueue - sempre em tamanho+1
char remover(struct Fila*); // Dequeue - sempre o da posição 0 e sobrescreve

#endif /* FILAESTATICA_H */