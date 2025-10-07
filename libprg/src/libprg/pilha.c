#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;

pilha_t* criar_pilha(int capacidade) {
    pilha_t* p = malloc(sizeof(pilha_t));
    p->elementos = malloc(capacidade * sizeof(int));

    p->topo = -1;
    p->capacidade = capacidade;

    return p;
}

void empilhar(pilha_t* pilha, int valor) {
    if (pilha->topo == (pilha->capacidade + 1)) {
        pilha->capacidade *= 2;
        pilha->elementos = realloc(pilha->elementos, pilha->capacidade * sizeof(int));
    }

    pilha->topo++;
    pilha->elementos[pilha->topo] = valor;
}

int desempilhar(pilha_t* pilha) {

    if (pilha->topo == -1) {
        return  -1;
    }
    int valor = pilha->elementos[pilha->topo];
    pilha->topo--;
    return valor;
}

int tamanho(pilha_t* pilha) {
    return pilha->topo + 1;
}

bool vazio(pilha_t* pilha) {

}


void destruir(pilha_t* pilha) {
    free(pilha->elementos);
    free(pilha);
}

/*

vazia
*/