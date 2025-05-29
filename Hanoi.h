#ifndef HANOI_H
#define HANOI_H

#include <stdbool.h>

#define TAM_MAX 20

typedef struct {
    int discos[TAM_MAX];
    int topo;
} PilhaEstatica;

typedef struct {
    PilhaEstatica torres[3];
    int discos;
} TorreHanoi;

void configurarJogo(TorreHanoi* jogo, int n);
bool mover(TorreHanoi* jogo, int origem, int destino);
void resolverHanoi(TorreHanoi* jogo, int n, int origem, int destino, int aux);

#endif
