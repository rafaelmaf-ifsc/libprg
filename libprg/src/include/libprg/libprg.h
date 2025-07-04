//
// Created by iot on 20/06/25.
//

#ifndef LIBPRG_H
#define LIBPRG_H

//#ifndef LIBPRG_LIBPRG_H
//#define LIBPRG_LIBPRG_H

#include <stdbool.h>

#define CAPACIDADE_INICIAL 5

/*--- PILHA ---*/
typedef struct pilha pilha_t;
pilha_t* create_stack();
void push(pilha_t* pilha, int valor);
int pop(pilha_t* pilha);
bool emptys(pilha_t* pilha);
int sizes(pilha_t* pilha);
void detroy_stack(pilha_t* pilha);

/*--- FILA ---
typedef struct fila fila_t;
fila_t* create_queue();
void enqueue(fila_t* fila, int valor);
int dequeue(fila_t* fila);
bool emptyq(fila_t* fila);
bool full(fila_t* fila);
int sizeq(fila_t* fila);
int head(fila_t* fila);
int tail(fila_t* fila);
void destroy_queue(fila_t* fila);*/

/*--- LISTA ---*/
typedef struct lista lista_t;
lista_t* create_list(bool ordenada);
void add(lista_t* lista, int valor);
int search(lista_t* lista, int valor);
bool removel(lista_t* lista, int valor);
void destroy_list(lista_t* lista);

    /*-- Fila V2 --*/

typedef struct queue Fila;
bool enfileirar(Fila *f, int valor);
bool filaCheia(Fila *f);
bool filaVazia(Fila *f);
void inicializarFila(Fila *f);
Fila *create_queue();
void imprimirFila(Fila *f);

#endif


