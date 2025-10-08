
#include <stdlib.h>
#include <stdbool.h>

typedef struct fila {
    int* elementos;
    int tamanho;
    int inicio;
    int fim;
    int capacidade;
} fila_t;

fila_t* criar_fila(int capacidade) {
    fila_t* f = malloc(sizeof(fila_t));
    f->elementos = malloc(capacidade * sizeof(int));

    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
    f->capacidade = capacidade;
    return f;
}

bool fila_cheia(fila_t* fila) {
    return fila->tamanho >= fila->capacidade;
}

bool fila_vazia(fila_t *fila) {
    return fila->tamanho<=0;
}

void enfileirar(fila_t* fila, int valor) {
    if (fila_cheia(fila)) {
        exit(EXIT_FAILURE);
    }

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->capacidade;
    fila->tamanho++;

}

int desenfileirar (fila_t* fila) {
    int valor = 0;
    if (fila->inicio == -1) {
        return -1;
    }
    valor = fila->elementos[fila->inicio];
    fila->inicio++;

    return valor;
}

int fila_inicio (fila_t* fila) {
    return fila->elementos[fila->inicio];
}

int fila_fim (fila_t* fila) {
    int indice = (fila->fim - 1 + fila->capacidade) % fila->capacidade;
    return fila->elementos[indice];
}

int fila_tamanho(fila_t *fila){
    return fila->tamanho;
}

void destruir_fila(fila_t *fila){
    free(fila->elementos);
    free(fila);
}

