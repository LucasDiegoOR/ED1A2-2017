#include "filaestatica1.h"

int main(int argc, char** argv) {

    struct Fila q;
    int op = 0;
    char elemento;
    
    do {
        printf("\nInforme a opção desejada:"
                "\n1 - Verificar se a Fila está vazia"
                "\n2 - Verificar se a Fila está cheia"
                "\n3 - Iniciar Fila"
                "\n4 - Obter início da Fila"
                "\n5 - Listar elementos da Fila"
                "\n6 - Inserir elemento na Fila"
                "\n7 - Remover elemento da Fila"
                "\n8 - Sair"
                "\n.: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                vazia(q);
                break;
            case 2:
                cheia(q);
                break;
            case 3:
                iniciarFila(&q);
                break;
            case 4:
                obterInicio(q);
                break;
            case 5:
                listarElementos(q);
                break;
            case 6:
                printf("\nInforme o elemento a ser inserido na Fila: ");
                scanf("%s", &elemento);
                inserir(&q, elemento);
                break;
            case 7:
                remover(&q);
                break;
            case 8:
                break;
        }
    } while (op != 8);
    
    return (EXIT_SUCCESS);
}