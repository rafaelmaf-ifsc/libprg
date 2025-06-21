//
// Created by iot on 21/06/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libprg/libprg.h"

#define TAMANHO_MAX 5

typedef struct queue{
    int *dados;
    int frente;
    int tras;
    int tamanho;
} Fila;

Fila *create_queue() {
    // Criar estrutura fila e alocar memória
    Fila *fila = (Fila *) malloc(sizeof(Fila));

    // Alocar memória para os elementos da fila
    fila->dados = (int *) malloc(sizeof(int) * CAPACIDADE_INICIAL);

    // Definir os valores iniciais da fila
    fila->frente = 0;
    fila->tras = 0;
    fila->tamanho = CAPACIDADE_INICIAL;

    return fila;
}

// Inicializa uma fila vazia
void inicializarFila(Fila *f) {
    f->frente = 0;
    f->tras = -1;
    f->tamanho = 0;
}

// Verifica se a fila está vazia
bool filaVazia(Fila *f) {
    return f->tamanho == 0;
}

// Verifica se a fila está cheia
bool filaCheia(Fila *f) {
    return f->tamanho == TAMANHO_MAX;
}

// Enfileira um elemento (insere no final)
bool enfileirar(Fila *f, int valor) {
    if (filaCheia(f)) {
        printf("Erro: Fila cheia!\n");
        return false;
    }

    f->tras = (f->tras + 1) % TAMANHO_MAX;
    f->dados[f->tras] = valor;
    f->tamanho++;
    return true;
}

// Desenfileira um elemento (remove do início)
bool desenfileirar(Fila *f, int *valor) {
    if (filaVazia(f)) {
        printf("Erro: Fila vazia!\n");
        return false;
    }

    *valor = f->dados[f->frente];
    f->frente = (f->frente + 1) % TAMANHO_MAX;
    f->tamanho--;
    return true;
}

// Imprime todos os elementos da fila
void imprimirFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Fila: [");
    int i, pos;
    for (i = 0, pos = f->frente; i < f->tamanho; i++) {
        printf("%d", f->dados[pos]);
        if (i < f->tamanho - 1) printf(", ");
        pos = (pos + 1) % TAMANHO_MAX;
    }
    printf("]\n");
}

// Retorna o elemento da frente sem remover
bool frenteFila(Fila *f, int *valor) {
    if (filaVazia(f)) {
        printf("Erro: Fila vazia!\n");
        return false;
    }

    *valor = f->dados[f->frente];
    return true;
}