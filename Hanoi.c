#include <stdio.h>
#include "hanoi.h"

void inicializarPilha(PilhaEstatica* p) {
    p->topo = -1;
}

bool empilharDisco(PilhaEstatica* p, int valor) {
    if (p->topo >= TAM_MAX - 1) return false;
    p->discos[++(p->topo)] = valor;
    return true;
}

int desempilharDisco(PilhaEstatica* p) {
    if (p->topo < 0) return -1;
    return p->discos[(p->topo)--];
}

int discoTopo(PilhaEstatica* p) {
    if (p->topo < 0) return -1;
    return p->discos[p->topo];
}

void configurarJogo(TorreHanoi* jogo, int n) {
    jogo->discos = n;
    for (int i = 0; i < 3; i++) {
        inicializarPilha(&jogo->torres[i]);
    }
    for (int i = n; i >= 1; i--) {
        empilharDisco(&jogo->torres[0], i);
    }
}

bool mover(TorreHanoi* jogo, int origem, int destino) {
    PilhaEstatica* o = &jogo->torres[origem];
    PilhaEstatica* d = &jogo->torres[destino];

    if (o->topo < 0) return false;

    int disco = discoTopo(o);
    if (d->topo >= 0 && disco > discoTopo(d)) return false;

    desempilharDisco(o);
    empilharDisco(d, disco);
    printf("Moveu disco %d de %c para %c\n", disco, 'A' + origem, 'A' + destino);
    return true;
}

void resolverHanoi(TorreHanoi* jogo, int n, int origem, int destino, int aux) {
    if (n == 0) return;

    resolverHanoi(jogo, n - 1, origem, aux, destino);
    mover(jogo, origem, destino);
    resolverHanoi(jogo, n - 1, aux, destino, origem);
}
