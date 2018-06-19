#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"


int main() {

	Registro *p1;
	p1 = aloca_registro(12,"miguel");
	Registro *p2;
	p2 = aloca_registro(25,"duda");
	Registro *p3;
	p3 = aloca_registro(27,"rafel");
	
	printa_registro(p3);

	Arv A = cria_arvore(p1, cria_arvore(p2, NULL, NULL),cria_arvore(p3,NULL, NULL));
	
	printf("%d",maior(A));
	

	return 0;
}