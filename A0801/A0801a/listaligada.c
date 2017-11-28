#include "listaligada.h"

// Estas são variáveis globais, apenas para facilitar os exemplos

// Elementos para uma Lista Encadeada Simples
struct No *inicioA;
struct No *nA1 = NULL;
struct No *nA2 = NULL;
struct No *nA3 = NULL;

// Elementos para uma Lista Duplamente Encadeada
struct No2 *inicioB;
struct No2 *nB1 = NULL;
struct No2 *nB2 = NULL;
struct No2 *nB3 = NULL;

void montarListaSimples() {
    // Reserva/aloca memória para cada nó
    nA1 = malloc(sizeof (struct No));
    nA2 = malloc(sizeof (struct No));
    nA3 = malloc(sizeof (struct No));

    // Atribuir valor aos dados dos nós
    nA1->dado = 10;
    nA2->dado = 11;
    nA3->dado = 12;

    // Conecta nós
    inicioA = nA1; // Aponta HEAD para o primeiro nó
    nA1->prox = nA2;
    nA2->prox = nA3;
    nA3->prox = NULL;
}

void listarListaSimples() {
    struct No *noCorrente = inicioA; // Inicia a partir do HEAD
    printf("\n\nOs elementos da Lista Encadeada sao:\n");
    while (noCorrente != NULL) { // Enquanto não for o fim (NULL)
        printf("|%d|", noCorrente->dado); // Mostra o dado do nó corrente
        noCorrente = noCorrente->prox; // Avança ponteiro para próximo elemento
        if (noCorrente != NULL) {
            printf("--->");
        } else {
            printf("---*");
        }
    }
}

void montarListaDupla() {
    // Reserva/aloca memória para cada nó
    nB1 = malloc(sizeof (struct No2));
    nB2 = malloc(sizeof (struct No2));
    nB3 = malloc(sizeof (struct No2));

    // Atribuir valor aos dados dos nós
    nB1->dado = 20;
    nB2->dado = 21;
    nB3->dado = 22;

    // Conecta nós
    inicioB = nB1; // Aponta HEAD para o primeiro nó
    nB1->prox = nB2;
    nB1->ant = NULL;

    nB2->prox = nB3;
    nB2->ant = nB1;

    nB3->prox = NULL; // Finaliza a lista
    nB3->ant = nB2;
}

void listarListaDupla() {
    struct No2 *noCorrente = inicioB; // Inicia a partir de HEAD
    printf("\n\nOs elementos da Lista Dulpamente Encadeada são:\n");
    while (noCorrente->prox != NULL) { // Enquanto não for o fim (NULL)
        printf("|%d|--->", noCorrente->dado); // Mostra o dado do nó corrente
        noCorrente = noCorrente->prox; // Avança ponteiro para próximo elemento
    }
    if (noCorrente != NULL) { // Tem um último elemento no final do avanço?
        printf("||%d||*->", noCorrente->dado); // Mostra o dado do último nó no final
        noCorrente = noCorrente->ant; // Avança ponteiro para elemento anterior
    }
    while (noCorrente != NULL) { // Enquanto não for o fim (NULL)
        printf("|%d|", noCorrente->dado); // Mostra o dado do nó corrente
        noCorrente = noCorrente->ant; // Avança ponteiro para elemento anterior
        if (noCorrente != NULL) {
            printf("--->");
        } else {
            printf("---*");
        }
    }
}