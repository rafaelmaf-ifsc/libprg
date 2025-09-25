#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct lista_linear {
    int* elementos;
    int tamanho;
    int capacidade;
    bool ordenada;

} lista_linear_t;

lista_linear_t* criar_lista_linear(int capacidade, bool ordenada) {
    lista_linear_t* lista = malloc(sizeof(lista_linear_t));

    lista->elementos = malloc(sizeof(int)*capacidade);

    lista->tamanho = 0;
    lista->capacidade = capacidade;
    lista->ordenada = ordenada;

    return lista;
}

bool lista_cheia(lista_linear_t* lista) {
    lista->tamanho == lista->capacidade;
}

void inserir_nao_ordenada(lista_linear_t* lista, int valor) {
    lista->elementos[lista->tamanho] = valor;
    lista->tamanho++;
}

void inserir_ordenada(lista_linear_t* lista, int valor) {
    for (int i = lista->tamanho -1; i >= 0; --i) {
        if (lista->elementos[i] < valor) {
            lista->elementos[i + 1] = valor;
            break;
        } else {
            lista->elementos[i + 1] = lista->elementos[i];

        }
    }
    lista->tamanho++;
}

void inserir(lista_linear_t* lista, int valor) {
    if (lista_cheia(lista)) {
        return;
    }
    if (lista->ordenada) {
        inserir_ordenada(lista, valor);
    } else {
        inserir_nao_ordenada(lista, valor);
    }

}

int busca_linear(lista_linear_t* lista, int valor) {
    int indice = 0;
    while (indice < lista->tamanho) {
        if (lista->elementos[indice] == valor) {
            return indice;
        }
        indice++;
    }
    return -1;
}

int busca_binaria(lista_linear_t* lista, int valor) {
    int indice = lista->tamanho/2;
    while (lista->elementos[indice] == valor) {

    }
}

int buscar(lista_linear_t* lista, int valor) {
    int indice = 0;
    while (indice < lista->tamanho) {
        if (lista->elementos[indice] == valor) {
            return indice;
        }
        indice++;
    }
    return -1;
}
