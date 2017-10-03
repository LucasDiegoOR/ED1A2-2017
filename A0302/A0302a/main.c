#include "support.h"

int main(int argc, char** argv) {
    ContaBancaria *cb;
    int op;

    do {
        printf("\nInsira o opção desejada:"
                "\n1 - Abrir Conta"
                "\n2 - Mostrar Conta"
                "\n3 - Lançar Crédito"
                "\n4 - Lancar Débito"
                "\n5 - Exibir Saldo"
                "\n0 - Sair"
                "\n.: ");
        scanf("%d", &op);

        if (op == 1) {
            abrirConta(&cb);
        } else if (op == 2) {
            mostrarConta(&cb);
        } else if (op == 3) {
            lancarCredito(&cb);
        } else if (op == 4) {
            lancarDebito(&cb);
        } else if (op == 5) {
            exibirSaldo(&cb);
        } else if (op == 0) {
            break;
        }
    } while (op != 0);

    return (EXIT_SUCCESS);
}