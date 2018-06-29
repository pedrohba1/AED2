#include <stdio.h>
#include "arvore_avl.h"

int main() {
	reg *r = aloca_registro("Manaus", 50, 300, 200);
	printa_registro(r);

	Arv A = cria_arv(r, NULL, NULL);
	exibe_arv(A);

	libera_arv(&A);
	exibe_arv(A);
	

	return 0;
}