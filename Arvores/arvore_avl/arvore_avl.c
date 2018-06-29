#include <stdio.h>
#include <stdlib.h>
#include "arvore_avl.h"

struct registro {
	char *id;
	int x, y;
	int trafego;
};

typedef struct no {
	struct registro r;
	struct no *sae;
	struct no *sad;
	int h;
} no;

reg* aloca_registro(char* id, int x, int y, int trafego) {
	reg *p = (reg*) malloc(sizeof(reg));
	
	p->id = id;
	p->x = x;
	p->y = y;
	p->trafego = trafego;
	
	return p;
}

void printa_registro(reg *r) {
	printf("Id: %s\n", r->id);
	printf("X: %d | Y: %d\n", r->x, r->y);	
	printf("Trafego: %d\n\n", r->trafego);
}


Arv cria_vazia() {
	return NULL;
}

Arv cria_arv(reg* r, Arv sae, Arv sad) {
	Arv arv = (Arv)malloc(sizeof(no));

	if (arv == NULL) {
		return NULL;
	}

	arv->r = *r;
	arv->sae = sae;
	arv->sad = sad;

	return arv;
}

void printa_arv(Arv A) {
	if (A == NULL) {
		printf("<>");
		return;
	}	

	printf("<");
	printf("%s", A->r.id);
	printa_arv(A->sae);
	printa_arv(A->sad);

	printf(">");
}


void exibe_arv(Arv A) {
	printa_arv(A);
	puts("");
}

void libera_arv(Arv* A) {
	if (*A != NULL)	{
		libera_arv(&(*A)->sae);
		libera_arv(&(*A)->sad);
		free(*A);
	}

	*A = NULL;
}

