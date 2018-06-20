#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"
#include <string.h>

struct registro {
	int idade;
	char nome[30];
};


Registro* aloca_registro(int idade, char nome[30]){
	Registro *p;
	p =(Registro*) malloc(1*sizeof(Registro));
	p->idade = idade;
	strcpy(p->nome,nome);
	return p;
}

void printa_registro(Registro *r){
	printf("nome: %s\n",r->nome);
	printf("idade :%d\n",r->idade);
	
}


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
	int inf_atual, inf_esq, inf_dir, inf_maior;
	Registro* atual, *esq, * dir, *maiord;
	atual = (Registro*) malloc(1*sizeof(Registro));
	esq = (Registro*) malloc(1*sizeof(Registro));
	dir = (Registro*) malloc(1*sizeof(Registro));
	maiord = (Registro*) malloc(1*sizeof(Registro));

	*atual = A->r;
	maiord = atual;
	

	if (A->sae != NULL) {
		esq = maior(A->sae);

		if (esq->idade > maiord->idade) {
			maiord = esq;
		}
	}

	if (A->sad != NULL) {
		dir =  maior(A->sad);

		if (dir->idade > esq->idade) {
			maiord = dir;
		}
	}
	return maiord;
}


int de_maior(Arv A){
	int qtd = 0;

	if(A == NULL) 
		return qtd;

	if(A->r.idade >= 18) 
		qtd++;
	
	qtd += de_maior(A->sae);
	qtd += de_maior(A->sad);
	return qtd;
}

















