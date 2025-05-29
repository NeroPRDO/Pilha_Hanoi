#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>

typedef struct {
    char elementos[50];
    int topo;
} PilhaChar;

void criarPilha(PilhaChar* p);
bool empilhar(PilhaChar* p, char c);
char desempilhar(PilhaChar* p);
char topoPilha(PilhaChar* p);
bool pilhaVazia(PilhaChar* p);
void mostrarPilha(PilhaChar* p);

#endif
