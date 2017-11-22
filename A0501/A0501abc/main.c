#include "listalinearestatica.h"

int main(int argc, char** argv) {

    struct Lista minhaLista;
    struct Lista interLista;
    struct Lista listaConcatenada;
    struct Lista sl;
    struct Lista listaPalindroma;
    int op = 0;

    char acesso;

    do {
        printf("\nInforme a opção desejada:"
                "\n1 - Iniciar Lista"
                "\n2 - Acessar elemento da Lista"
                "\n3 - Alterar elemento da Lista"
                "\n4 - Inserir elemento na Lista"
                "\n5 - Remover elemento da Lista"
                "\n6 - Concatenar duas Listas"
                "\n7 - Inverter a ordem dos elementos da Lista"
                "\n8 - Criar uma Sublista a partir de uma Lista"
                "\n9 - Inserir um elemento mantendo a ordem alfabética na lista"
                "\n10 - Mostrar Lista"
                "\n11 - Localizar o nó que contém determinado valor"
                "\n12 - Intercalar Listas produzindo terceira como resultado"
                "\n13 - Ordenar Lista em ordem crescente"
                "\n14 - Verificar se a Lista é palíndroma"
                "\n15 - Sair"
                "\n.: ");
        scanf("%d", &op);
        switch (op) {
            case 1: // Iniciar Lista
                iniciarLista(&minhaLista);
                mostrarLista(minhaLista);
                break;
            case 2: // Acessar elemento da Lista                
                acesso = acessar(minhaLista, 1);
                printf("\nMain: O elemento de índice %d é o caractere: %c\n", 1, acesso);
                break;
            case 3: // Alterar elemento da Lista
                alterar(&minhaLista, 2, 'P');
                mostrarLista(minhaLista);
                break;
            case 4: // Inserir elemento na Lista
                inserir(&minhaLista, POS_FINAL, 'L');
                inserir(&minhaLista, POS_FINAL, 'I');
                inserir(&minhaLista, POS_FINAL, 'S');
                inserir(&minhaLista, POS_FINAL, 'T');
                inserir(&minhaLista, POS_FINAL, 'A');
                inserir(&minhaLista, 5, '1');
                // Tentar inserir valor fora do intervalo
                inserir(&minhaLista, 1000, 'H');
                mostrarLista(minhaLista);
                break;
            case 5: // Remover elemento da Lista
                remover(&minhaLista, 4);
                // Tentar remover fora dos limites
                remover(&minhaLista, 100);
                mostrarLista(minhaLista);
                break;
            case 6: // Concatenar duas Listas
                iniciarLista(&listaConcatenada);
                inserir(&listaConcatenada, POS_FINAL, 'L');
                inserir(&listaConcatenada, POS_FINAL, 'U');
                inserir(&listaConcatenada, POS_FINAL, 'C');
                inserir(&listaConcatenada, POS_FINAL, 'A');
                inserir(&listaConcatenada, POS_FINAL, 'S');
                concatenar(&minhaLista, &listaConcatenada);
                mostrarLista(minhaLista);
                break;
            case 7: // Inverter a ordem dos elementos da Lista
                inverter(&minhaLista);
                mostrarLista(minhaLista);
            case 8: // Criar uma Sublista a partir de uma Lista
                sl = subLista(minhaLista, 0, 3);
                mostrarLista(sl);
                break;
            case 9: // Inserir um elemento mantendo a ordem alfabética na lista
                inserirOrdenado(&minhaLista, 'E');
                mostrarLista(minhaLista);
                break;
            case 10: // Mostrar Lista
                mostrarLista(minhaLista);
                break;
            case 11: // Localizar o nó que contém determinado valor
                noLista(&minhaLista, 'S');
                break;
            case 12: // Intercalar Listas produzindo terceira como resultado
                iniciarLista(&interLista);
                inserir(&interLista, POS_FINAL, 'A');
                inserir(&interLista, POS_FINAL, 'B');
                inserir(&interLista, POS_FINAL, 'C');
                inserir(&interLista, POS_FINAL, 'D');
                inserir(&interLista, POS_FINAL, 'E');
                intercalar(&minhaLista, &interLista);
                mostrarLista(interLista);
                break;
            case 13: // Ordenar Lista em ordem crescente
                ordemCrescente(&minhaLista);
                mostrarLista(minhaLista);
                break;
            case 14: // Verificar palíndromo
                iniciarLista(&listaPalindroma);
                inserir(&listaPalindroma, POS_FINAL, 'A');
                inserir(&listaPalindroma, POS_FINAL, 'R');
                inserir(&listaPalindroma, POS_FINAL, 'A');
                inserir(&listaPalindroma, POS_FINAL, 'R');
                inserir(&listaPalindroma, POS_FINAL, 'A');
                palindromo(&listaPalindroma);
                break;
            case 15: // Sair
                break;
            default:
                printf("Opção Inválida!");
        };
    } while (op != 15);

    return EXIT_SUCCESS;
}