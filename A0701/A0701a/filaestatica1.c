#include "filaestatica1.h"

int vazia(struct Fila q) {
    if (q.tamanho == 0) {
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q) {
    if (q.tamanho == MAX_ELEM) {
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        q->elem[i] = ELEM_NULO; // Atribui elemento nulo em cada célula da fila
    }
    q->tamanho = 0;
}

char obterInicio(struct Fila q) {
    char dado = ELEM_NULO;
    if (!vazia(q)) {
        dado = q.elem[0]; // Elemento da posição ZERO
    }
    return printf("\nValor do início da Fila: %c\n", dado);
}

void listarElementos(struct Fila q) {
    int i;
    if (vazia(q)) {
        printf("\nFila vazia!\n");
    } else {
        printf("\n----- Conteúdo da Fila -----\n");
        for (i = 0; i < q.tamanho; i++) {
            printf("\n[%d] = %c", i, q.elem[i]);
        }
        printf("\n");
    }
}

int inserir(struct Fila* q, char e) {
    if (!cheia(*q)) {
        q->elem[q->tamanho] = e; // Insere elemento no final da fila
        q->tamanho++;
    } else {
        return FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* q) {
    int i;
    char e = ELEM_NULO;
    e = obterInicio(*q);
    if (e != ELEM_NULO) { // Se obteve elemento, significa que existia pelo menos um elemento
        for (i = 0; i < (q->tamanho - 1); i++) { // Remaneja elementos de uma posição para o incício da fila, pois a fila anda
            q->elem[i] = q->elem[i + 1];
        }
        q->elem[q->tamanho - 1] = ELEM_NULO; // Limpa a célula onde residia o último
        q->tamanho--; // Reduz o tamanho da fila;
    }
    return e;
}