#include <stdio.h>
#include "pilha.h"
#include "hanoi.h"

void testarPilhaChar() {
    PilhaChar p;
    criarPilha(&p);

    char letras[] = {'A', 'B', 'C', 'D'};

    printf("Empilhando letras A, B, C, D...\n");
    for (int i = 0; i < 4; i++) {
        if (empilhar(&p, letras[i])) {
            printf("Empilhou: %c\n", letras[i]);
        } else {
            printf("Erro ao empilhar %c\n", letras[i]);
        }
    }

    mostrarPilha(&p);

    printf("\nDesempilhando tudo:\n");
    while (!pilhaVazia(&p)) {
        printf("Desempilhado: %c\n", desempilhar(&p));
    }
}

void testarHanoi() {
    TorreHanoi jogo;
    int discos;

    printf("\nDigite o numero de discos para a Torre de Hanoi (1 a 10): ");
    scanf("%d", &discos);

    if (discos < 1 || discos > 10) {
        printf("Número invalido.\n");
        return;
    }

    configurarJogo(&jogo, discos);
    printf("Resolvendo Torre de Hanoi com %d discos:\n", discos);
    resolverHanoi(&jogo, discos, 0, 2, 1);
}

int main() {
    int opcao;

    do {
        printf("\n==== MENU ====\n");
        printf("1. Testar Pilha de Caracteres\n");
        printf("2. Simular Torre de Hanoi\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                testarPilhaChar();
                break;
            case 2:
                testarHanoi();
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
