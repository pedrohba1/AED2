#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"
struct no {
	int info;
	struct no *sae;
	struct no *sad;
};


Arv cria_vazia(){
	return NULL;
}

Arv cria_arvore(int elem, Arv esq, Arv dir) {

	struct no *node;
	node =(Arv) malloc(sizeof(struct no));

	if(node == NULL)
		return NULL;

	node->info = elem;
	node->sae = esq;
	node->sad = dir;

	return node;
}


int arvore_vazia(Arv T) {

	if (T == NULL)
		return 1;
	else
		return 0;
}


int libera_arvore(Arv *A)
{
	if(!arvore_vazia(*A)) {
		libera_arvore(&(*A)->sad);
		libera_arvore(&(*A)->sae);
		free(*A);
	}
	*A = NULL;
}


int busca (Arv A, int elem){
	if(arvore_vazia(A)){
		return 0;
	}

	if(A->info == elem){
		return 1;
	}

	busca(A->sae,elem);
	busca(A->sad,elem);

return 0;
}

