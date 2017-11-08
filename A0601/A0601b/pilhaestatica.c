#include "pilhaestatica.h"

int vazia(struct Pilha p) {
    if (p.topo == -1) {
        return SIM;
    }
    return NAO;
}

int cheia(struct Pilha p) {
    if (p.topo == MAX_ELEM) {
        return SIM;
    }
    return NAO;
}

void iniciarPilha(struct Pilha* p) {
    p->topo = PILHA_VAZIA;
    int i;
    for (i = 0; i <= MAX_ELEM; i++) {
        p->elem[i] = 0;
    }
}

char obterTopo(struct Pilha p) {
    if (vazia(p)) {
        return printf("\nErro ao obter topo! A Pilha está vazia!\n");
    } else {
        return printf("\nO elemento do topo da lista é: %c \n", p.elem[p.topo]);
    }
}

void listarElementos(struct Pilha p) {
    printf("\n----- Lista de Elementos -----\n");
    int i;
    for (i = 0; i <= p.topo; i++) {
        printf("%c \n", p.elem[i]);
    }
}

int inserir(struct Pilha* p, char valor) {
    if (cheia(*p)) {
        return printf("\nErro ao inserir! A Pilha está cheia!\n");
    } else {
        p->topo++;
        p->elem[p->topo] = valor;
    }
}

char remover(struct Pilha* p) {
    if (vazia(*p)) {
        return printf("\nErro ao remover! A Pilha está vazia!\n");
    } else {
        p->elem[p->topo] = 0;
        p->topo--;
    }
}

char palindromo(struct Pilha* p) {
    if (vazia(*p)) {
        return printf("\nErro ao verificar palíndromo! A Pilha está vazia!\n");
    } else {
        struct Pilha* pp;
        int i, j = p->topo, np = 0;
        for (i = 0; i <= p->topo; i++) {
            pp->elem[i] = p->elem[j];
            j--;
        }
        for (i = 0; i <= p->topo; i++) {
            if (pp->elem[i] != p->elem[i]) {
                np = 1;
            }
        }
        if (np == 1) {
            printf("\nA Pilha não é Palíndroma!\n");
        } else {
            printf("\nA Pilha é Palíndroma!\n");
        }
    }
}