#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"


struct registro {
	int idade;
	char nome[30];
};


struct no {
	struct registro r;
	struct no *sae;
	struct no *sad;
};

Arv cria_vazia(){
	return NULL;
}

Arv cria_arvore(Registro *rnew , Arv esq, Arv dir) {

	struct no *node;
	node =(Arv) malloc(sizeof(struct no));

	if(node == NULL)
		return NULL;

	node->r = *rnew;
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

Registro* maior(Arv A){
	Registro *r2;

	 int aux = A->r.idade;
	 
	if(A->r.idade> r2->idade)
		{
			r2->idade = A->r.idade;
		}

	maior(A->sae);
	maior(A->sad);

	return r2;
}
