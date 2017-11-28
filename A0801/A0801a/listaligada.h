#ifndef LISTALIGADA_H
#define LISTALIGADA_H

#include <stdio.h>
#include <stdlib.h>

// Estrutura de Nó para Lista Ligada Simples e até Circular

struct No {
    int dado;
    struct No *prox;
};

// Estrutura de Nó para Lista Duplamente Ligada

struct No2 {
    int dado;
    struct No2 *prox;
    struct No2 *ant;
};

// Protótipos das operações

void montarListaSimples();
void listarListaSimples();
void montarListaDupla();
void listarListaDupla();

#endif /* LISTALIGADA_H */