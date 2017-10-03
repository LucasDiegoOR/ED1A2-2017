#ifndef STRUCTEST_H
#define STRUCTEST_H

/* Declaração da Estrutura Livro */
struct Livro {
    char titulo[50];
    char autor[50];
    char assunto[100];
    int numTombo;
    int numExs;
};

/* Declaração de um novo tipo de Dado na forma de struct */
typedef struct {
    int matricula;
    char nome[30];
    char endereco[100];
    char fone[15];
} Aluno;

/* Protótipos das funções */
void mostrarLivro(struct Livro * l);
void mostrarAluno(Aluno ap);

#endif /* STRUCTEST_H */

