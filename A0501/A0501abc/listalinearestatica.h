#ifndef LISTALINEARESTATICA_H
#define LISTALINEARESTATICA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEM 10 // Número máximo de elementeos na lista.
#define POS_FINAL -1 // Número absurdo no contexto.
                     // Indica qualquer posição final lógica na lista.

// Estrutura de Dados
struct Lista{
    int n;
    char elem[MAX_ELEM];
};

// Protótipos das funções
void iniciarLista(struct Lista*);
char acessar(struct Lista, int);
void alterar(struct Lista*, int, char);
void inserir(struct Lista*, int, char);
void remover(struct Lista*, int);
void concatenar(struct Lista*, struct Lista*);
void inverter(struct Lista*);
struct Lista subLista(struct Lista, int, int);
void inserirOrdenado(struct Lista*, char);
void mostrarLista(struct Lista);
int noLista(struct Lista*, char);
struct Lista intercalar(struct Lista*, struct Lista*);
void ordemCrescente(struct Lista*);
char palindromo(struct Lista*);

#endif /* LISTALINEARESTATICA_H */

