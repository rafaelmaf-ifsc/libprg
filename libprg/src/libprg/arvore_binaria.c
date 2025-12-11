

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct no_arvore {
    int valor;
    struct no *esquerda;
    struct no *direita;
} no_arvore_t;

no_arvore_t *criar_no_arvore (int valor){
    no_arvore_t *no = (no_arvore_t *) malloc(sizeof (no_arvore_t));
    no->valor = valor;
    no->esquerda = no->direita = NULL;
    return no;
}

void destruir_no_arvore (no_arvore_t *no) {
    if (no != NULL) {
        destruir_no (no->esquerda); destruir_no (no->direita);
        free (no) ;
    }
}

// todos nós são raiz de uma subárvore
no_arvore_t *inserir_valor_arvore(no_arvore_t *raiz, int valor){
    if (raiz == NULL) {
        return criar_no(valor);
    } else if (valor < raiz->valor) {
        raiz->esquerda = inserir_valor(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir_valor(raiz->direita, valor);
    }
    return raiz;
}

no_arvore_t *remover_valor_arvore(no_arvore_t *raiz, int valor){
    if (raiz == NULL) return raiz;
    if (valor < raiz->valor) {
        // raiz−>esquerda = remover...
    } else if (valor > raiz->valor) {
        // raiz−>direita = remover...
    } else {
        // IF nó folha ou nó com um filho
        // ELSE nó com dois filhos
    }
    return raiz;
}

int imprime_no_arvore(no_arvore_t *no) {
    if (no->valor) {
        printf("%d",no->valor);
    }
}

bool busca(no_arvore_t *raiz, int valor){
    if (raiz == NULL) return false;
    if (valor == raiz->valor) return true;
    if (valor < raiz->valor) return busca(raiz->esquerda, valor);
    return busca(raiz->direita, valor);
}

int travessia_inorder(no_arvore_t *valor) {
    if (valor->valor) {
        travessia_inorder(valor->esquerda);
        imprime_no(valor);
        travessia_inorder(valor->direita);
    }
}