#ifndef LIBPRG_H
#define LIBPRG_H

#include <stdbool.h>

/*-- PILHA --*/
typedef struct pilha pilha_t;

pilha_t* criar_pilha(int capacidade);
int empilhar(pilha_t* pilha, int valor);
void destruir_pilha(pilha_t* pilha);
int desempilhar(pilha_t* pilha);
int tamanho_pilha(pilha_t* pilha);
int topo_pilha(pilha_t* pilha);
bool vazio_pilha(pilha_t* pilha);

/*-- FILA --*/
typedef struct fila fila_t;

fila_t *criar_fila(int capacidade);

void enfileirar(fila_t *fila, int valor);
bool fila_cheia(fila_t *fila);
bool fila_vazia(fila_t *fila);
int desenfileirar(fila_t *fila);
int fila_inicio(fila_t *fila);
int fila_fim(fila_t *fila);
int fila_tamanho(fila_t *fila);
void destruir_fila(fila_t *fila);


/*--LISTA LINEAR--*/
typedef struct lista_linear lista_linear_t;

lista_linear_t *criar_lista_linear(int capacidade, bool ordenada);
bool lista_linear_cheia(lista_linear_t *lista);
void inserir(lista_linear_t *lista, int valor);
bool lista_linear_vazia(lista_linear_t *lista);
int busca_linear(lista_linear_t* lista, int valor);
int busca_binaria(lista_linear_t* lista, int valor);
int buscar_lista(lista_linear_t *lista, int valor);
int remover_nao_ordenada(lista_linear_t *lista, int valor);
int remover_ordenada(lista_linear_t *lista, int valor);
int remover_da_lista(lista_linear_t *lista, int valor);
void destruir_lista(lista_linear_t *lista);
int elemento_da_lista(lista_linear_t *lista, int indice);
int tamanho_da_lista(lista_linear_t *lista);

/*--LISTA ENCADEADA--*/
typedef struct no no_t;

no_t* buscar_lista_encadeada(no_t** inicio, int valor);
no_t* criar_lista_encadeada(int valor);
void remover_lista_encadeada(no_t** inicio, int valor);

no_t* criar_lista_encadeada_circular(int valor);
void adicionar_circular (no_t** inicio, int valor);
void adicionar_no (no_t** inicio, int valor);
void destruir_no(no_t** inicio);
void destruir_no_circular(no_t **inicio);

/*-- Lista encadeada DUPLA --*/
typedef struct no_duplo no_duplo_t;

no_duplo_t* criar_lista_encadeada_dupla(int valor);
no_duplo_t* buscar_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
no_duplo_t* adicionar_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
void remover_lista_encadeada_dupla(no_duplo_t** inicio, int valor);

/*-- ARVORE BINARIA ---*/
typedef struct no_arvore no_arvore_t;
no_arvore_t *criar_no (int valor);
void destruir_no (no_arvore_t *no);
no_arvore_t *inserir_valor(no_arvore_t *raiz, int valor);
no_arvore_t *remover_valor(no_arvore_t *raiz, int valor);
int imprime_no(no_arvore_t *no);
bool busca(no_arvore_t *raiz, int valor);
int travessia_inorder(no_arvore_t *valor);


#endif
