#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

#define SIM 1
#define NAO 0
#define SUCESSO 0
#define MAX_ELEM 9
#define PILHA_VAZIA -1
#define PILHA_CHEIA -2

struct Pilha {
    int topo;
    char elem[MAX_ELEM];
};

int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*);
char obterTopo(struct Pilha);
void listarElementos(struct Pilha);
int inserir(struct Pilha*, char);
char remover(struct Pilha*);

#endif /* PILHA_H */