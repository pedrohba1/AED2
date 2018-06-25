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
	Registro *p4;
	p4 = aloca_registro(23,"Juninho lorde das trevas");
	Registro *p5;
	p5 = aloca_registro(42,"Ricardo");
	
	Arv A3 = cria_arvore(p5, NULL, NULL);
	Arv A2 = cria_arvore(p4,A3,NULL);
	Arv A = cria_arvore(p1, A2,NULL);
	printf("%d\n",um_filho(A));


	return 0;
}