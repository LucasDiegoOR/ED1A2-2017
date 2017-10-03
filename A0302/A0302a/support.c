#include "support.h"

/* Formata a exibição de um registro de Conta Bancária */
void abrirConta(ContaBancaria *cb) {
    printf("Informe o Número da Conta: ");
    scanf("%d", &cb->numeroConta);
    printf("Informe o Nome do Cliente: ");
    scanf("%s", &cb->nomeCliente);
    cb->saldoConta = 0;
}

void mostrarConta(ContaBancaria *cb) {
    printf("\n----- CONTA BANCÁRIA -----\n");
    printf("Número da Conta..: %d \n", cb->numeroConta);
    printf("Nome do Cliente..: %s \n", cb->nomeCliente);
    printf("Saldo da Conta...: %0.2f \n", cb->saldoConta);
}

void lancarCredito(ContaBancaria *cb) {
    float valDep;
    printf("Informe o valor de depóstio: ");
    scanf("%f", &valDep);
    cb->saldoConta = cb->saldoConta + valDep;
}

void lancarDebito(ContaBancaria *cb) {
    float valSaq;
    printf("Informe o valor de saque: ");
    scanf("%f", &valSaq);
    cb->saldoConta = cb->saldoConta - valSaq;
}

void exibirSaldo(ContaBancaria *cb) {
    printf("O saldo atual é: %0.2f", cb->saldoConta);
}