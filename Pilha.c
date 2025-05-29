#include <stdio.h>
#include "pilha.h"

void criarPilha(PilhaChar* p) {
    p->topo = -1;
}

bool empilhar(PilhaChar* p, char c) {
    if (p->topo >= 49) return false;
    p->topo++;
    p->elementos[p->topo] = c;
    return true;
}

char desempilhar(PilhaChar* p) {
    if (pilhaVazia(p)) {
        printf("Erro: pilha vazia!\n");
        return '\0';
    }
    return p->elementos[p->topo--];
}

char topoPilha(PilhaChar* p) {
    if (pilhaVazia(p)) return '\0';
    return p->elementos[p->topo];
}

bool pilhaVazia(PilhaChar* p) {
    return p->topo == -1;
}

void mostrarPilha(PilhaChar* p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
        return;
    }
    for (int i = 0; i <= p->topo; i++) {
        printf("[%d] %c\n", i, p->elementos[i]);
    }
}
