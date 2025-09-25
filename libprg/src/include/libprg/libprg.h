#ifndef LIBPRG_H
#define LIBPRG_H

#include <stdbool.h>

/*-- PILHA --*/
typedef struct pilha pilha_t;

pilha_t* criar_pilha(int capacidade);
void empilhar(pilha_t* pilha, int valor);
int tamanho(pilha_t* pilha);
void destruir(pilha_t* pilha);
int desempilhar(pilha_t* pilha);

/*-- FILA --*/
typedef struct fila fila_t;

fila_t* criar_fila(int capacidade);
void enfileirar(fila_t* fila, int valor);
bool cheia(fila_t* fila);
int desenfileirar (fila_t* fila);
int inicio (fila_t* fila);
int fim (fila_t* fila);

/*-- LISTA --*/
typedef struct lista_linear lista_linear_t;

lista_linear_t* criar_lista_linear(int capacidade, bool ordenada);
void inserir_ordenada(lista_linear_t* lista, int valor);

#endif