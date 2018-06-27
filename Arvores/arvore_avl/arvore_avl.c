#include <stdio.h>
#include <stdlib.h>
#include "arvore_avl.h"

struct registro {
	char *id;
	int x, y;
	int trafego;
};

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
	printf("Trafego: %d\n", r->trafego);
}

