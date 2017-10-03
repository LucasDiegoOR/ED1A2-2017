#ifndef SUPPORT_H
#define SUPPORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Declaração da Estrutura ContaBancaria */
typedef struct {
    int numeroConta;
    char *nomeCliente[50];
    float saldoConta;
} ContaBancaria;

/* Protótipos das funções */
void mostrarConta(ContaBancaria *cb);
void abrirConta(ContaBancaria *cb);
void lancarCredito(ContaBancaria *cb);
void lancarDebito(ContaBancaria *cb);
void exibirSaldo(ContaBancaria *cb);

#endif