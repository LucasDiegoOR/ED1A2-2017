#include "filaestatica2.h"

int vazia(struct Fila q) {
    if (q.inicio == FILA_VAZIA) {
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q) {
    if ((q.inicio == 0 && q.fim == MAX_ELEM - 1) || (q.inicio == q.fim + 1)) {
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        q->elem[i] = 0;
    }
    q->fim = FILA_VAZIA;
    q->inicio = FILA_VAZIA;
}

char obterInicio(struct Fila q) {
    char dado = 0;
    if (!vazia(q)) {
        dado = q.elem[q.inicio];
    }
    return printf("\nValor do início da Fila: %c\n", dado);
}

void listarElementos(struct Fila q) {
    int i;
    int ordem;
    if (vazia(q)) {
        printf("\nFila vazia!\n");
    } else {
        printf("\n----- Conteúdo da Fila -----\n");
        ordem = 1;
        for (i = q.inicio; i <= q.fim; i = ((i + 1) % MAX_ELEM)) { // For com circularidade
            printf("\n%dº = %c", ordem, q.elem[i]);
            ordem++;
        }
        printf("\n");
    }
}

int inserir(struct Fila* q, char e) {
    if (!cheia(*q)) {
        if (q->inicio == FILA_VAZIA) {
            q->inicio++;
        }
        q->fim = (q->fim + 1) % MAX_ELEM; // Calcula o índice da inserção circularmente
        q->elem[q->fim] = e; // Insere o elemento no topo
    } else {
        return FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* q) {
    char e = ELEM_NULO;
    if (!vazia(*q)) {
        e = obterInicio(*q); // Recupera o elemento do início da fila
        q->elem[q->inicio] = ELEM_NULO; // Anula o valor do início atual
        if (q->inicio == q->fim) {
            q->inicio = FILA_VAZIA; // O valor deve ser -1 para funcionar o cálculo dos índices circularmente
            q->fim = FILA_VAZIA;
        } else {
            q->inicio = (q->inicio + 1) % MAX_ELEM; // Atualiza o início, circularmente
        }
    }
    return e;
}

char tamanho(struct Fila q) {
    if (q.inicio <= q.fim) {
        return printf("\nO tamanho da Fila é: %d\n", q.fim - q.inicio + 1);
    }
    return ((MAX_ELEM - q.inicio)+(q.fim + 1));
}