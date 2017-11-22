#include "listalinearestatica.h"

/* Inicia a lista definindo a quantidade de elementos com 0 e cada elemento 
 * com caractere nulo (0). 
 * lst - struct Lista a iniciar.
 */
void iniciarLista(struct Lista* lst) {
    int i;
    lst->n = 0; // A quantidade de elementos inicia com 0.
    for (i = 0; i < MAX_ELEM; i++) {
        lst->elem[i] = 0; // Cada elemento é iniciado com valor nulo (0 = nulo).
    }
}

/* Possibilita acessar um elemento na posição k de uma lista.
 * lst - struct Lista a realizar o acesso.
 * k - posição do elemento desejado.
 * return char - referente ao elemento da posição k. Caso haja erro
 * retorna o caractere nulo (0).
 */
char acessar(struct Lista lst, int k) {
    char dado = 0;
    if (k < 0 || k > (lst.n - 1)) {
        printf("\nErro ao acessar - Lista vazia ou índice fora dos limites!\n");
    } else {
        dado = lst.elem[k];
    }
    return dado;
}

/* Altera o dado na posição k da lista.
 * lst - struct Lista a realizar o acesso.
 * k - posição k do elemento cujo valor será alterado.
 * dado - dado a representar o novo valor na posição k.
 */
void alterar(struct Lista* lst, int k, char dado) {
    if (k < 0 || k > (lst->n - 1)) {
        printf("\nErro ao alterar - Lista vazia ou índice fora dos limites!\n");
    } else {
        lst->elem[k] = dado;
    }
}

/* Insere um dado na lista em uma posição específica.
 * lst - struct Lista a realizar a inserção.
 * k - posição k da lista em que o dado será inserido. A constante FINAL, indica
 * que a inserção será no final da lista.
 * dado - valor a ser inserido na posição k da lista.
 */
void inserir(struct Lista* lst, int k, char dado) {
    int i;
    if (lst->n >= MAX_ELEM) {
        printf("\nErro ao inserir - Lista cheia!\n");
    } else {
        if (k == POS_FINAL || lst->n == 0) {
            lst->elem[lst->n] = dado;
            lst->n++;
        } else {
            if (k < 0 || k > (lst->n - 1)) {
                printf("\nErro ao inserir na posição k - Índice fora dos limites!\n");
            } else {
                for (i = lst->n; i > k; i--) {
                    lst->elem[i] = lst->elem[i - 1];
                }
                lst->elem[k] = dado;
                lst->n++;
                printf("\n");
            }
        }
    }
}

/* Remove o elemento da posição k da lista.
 * lst - struct Lista a executar a exclusão.
 * k - posição do elemento a ser removido. A constante FINAL indica que
 * o elemento será o último da lista.
 */
void remover(struct Lista* lst, int k) {
    int i;
    if (k == POS_FINAL) {
        lst->elem[(lst->n) - 1] = 0;
        lst->n--;
    } else {
        if (k < 0 || k > (lst->n - 1)) {
            printf("\nErro ao remover - Lista vazia ou índice fora dos limites!\n");
        } else {
            for (i = k; i < lst->n; i++) {
                lst->elem[i] = lst->elem[i + 1];
            }
            lst->n--;
            lst->elem[lst->n] = 0;
        }
    }
}

/* Concatena (une) duas listas de forma que a segunda lista é copiada para as
 * porções finais da primeira até o limite suportado por esta.
 * lst1 - primeira lista - receberá elementos da outra lista.
 * lst2 - segunda lista - proverá elementos a serem juntados à primeira lista. 
 */
void concatenar(struct Lista* lst1, struct Lista* lst2) {
    int i, limite;
    if ((lst1->n + lst2->n) <= MAX_ELEM) {
        limite = lst2->n;
    } else {
        limite = MAX_ELEM - lst1->n;
    }
    for (i = 1; i <= limite; i++) {
        lst1->elem[lst1->n] = lst2->elem[i - 1];
        lst1->n++;
    }
}

/* Inverte a ordem dos elementos da lista.
 * lst - Lista cujos elementos serão invertidos em sua ordem.
 */
void inverter(struct Lista* lst) {
    int i;
    char aux;
    for (i = 0; i < (lst->n - 1) / 2; i++) {
        aux = lst->elem[i];
        lst->elem[i] = lst->elem[lst->n - (i + 1)];
        lst->elem[lst->n - (i + 1)] = aux;
    }
}

/* Cria uma sublista a partir de uma lista. A sublista conterá n elementos
 * a partir da posição k.
 * lst - Lista de origem para criar a sublista.
 * k - posição a partir da qual os elementos serão copiados.
 * n - quantidade de elementos a copiar para a sublista.
 * return struct Lista - referente à sublista criada.
 */
struct Lista subLista(struct Lista lst, int k, int n) {
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if (k < 0 || k > (MAX_ELEM - 1)) {
        printf("\nErro ao definir sublista - Origem vazia ou índice além dos limites!\n");
    } else {
        if ((k + n) <= MAX_ELEM) {
            limite = n;
        } else {
            limite = MAX_ELEM - k;
        }
        for (i = 1; i <= limite; i++) {
            inserir(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }
    return result;
}

/* Insere um elemento ou nó, mantendo ordem alfabética na lista.
 * lst - Lista em que o nó será inserido.
 * e - elemento
 */
void inserirOrdenado(struct Lista* lst, char e) {
    int k = 0;
    while ((e >= lst->elem[k]) && (k < lst->n)) {
        k++;
    }
    inserir(lst, k, e);
}

/* Formata a exibição de uma lista.
 *lst - Lista a ser exibida.
 */
void mostrarLista(struct Lista lst) {
    int k;
    printf("\n----- Lista de Caracteres -----\n");
    for (k = 0; k < (lst.n); k++) {
        printf("\nL[%d] = %c", k, lst.elem[k]);
    }
    printf("\n");
}


// ATIVIDADE A0501b

int noLista(struct Lista* lst, char procurar) {
    int i, no, cont = 0;
    if (lst->n == 0) {
        printf("\nErro ao encontrar nó, a lista pode estar vazia!\n");
    } else {
        for (i = 0; i < lst->n; i++) {
            if (lst->elem[i] == procurar) {
                no = i;
                cont++;
            }
        }
    }
    if (cont >= 1) {
        printf("\nElemento encontrado na posição %d da Lista.\n", no);
    } else {
        printf("\nElemento não encontrado em nenhuma posição da Lista.\n");
    }
}

struct Lista intercalar(struct Lista* lst1, struct Lista* lst2) {
    struct Lista resultado;
    iniciarLista(&resultado);
    int idx, idx1, idx2;

    for (idx = 0, idx1 = 0, idx2 = 0; idx1 < lst1 ->n && idx2 < lst2->n; idx = idx + 2) {
        inserir(&resultado, idx, lst1->elem[idx1]);
        inserir(&resultado, idx + 1, lst2->elem[idx2]);
        idx1++;
        idx2++;
    }
    while (idx1 < lst1->n) {
        inserir(&resultado, idx, lst1->elem[idx1]);
        idx++;
        idx1++;
    }
    while (idx2 < lst2->n) {
        inserir(&resultado, idx, lst2->elem[idx2]);
        idx++;
        idx2++;
    }
    return resultado;
}

void ordemCrescente(struct Lista* lst) {
    char aux;
    for (int x = 0; x < lst->n; x++) {
        for (int y = x + 1; y < lst->n; y++) {
            if (lst->elem[x] > lst->elem[y]) {
                aux = lst->elem[x];
                lst->elem[x] = lst->elem[y];
                lst->elem[y] = aux;
            }
        }
    }
}


// ATIVIDADE A0501c

int vazia(struct Lista lst) {
    if (lst.n == -1) {
        return 1;
    }
    return 0;
}

char palindromo(struct Lista* lst) {
    if (vazia(*lst)) {
        return printf("\nErro ao verificar palíndromo! A Lista está vazia!\n");
    } else {
        struct Lista* lstp;
        int i, j = lst->n - 1, np = 0;
        for (i = 0; i <= lst->n; i++) {
            lstp->elem[i] = lst->elem[j];
            j--;
        }
        for (i = 0; i <= lst->n; i++) {
            if (lstp->elem[i] != lst->elem[i]) {
                np = 1;
            }
        }
        if (np == 1) {
            printf("\nA Lista não é Palíndroma!\n");
        } else {
            printf("\nA Lista é Palíndroma!\n");
        }
    }
}