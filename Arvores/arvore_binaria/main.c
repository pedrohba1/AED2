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
	p5 = aloca_registro(11,"Ricardinho");
	



	Arv A;
	A = cria_vazia();
	insere_ord(&A,p1);
	insere_ord(&A,p2);
	insere_ord(&A,p3);
	insere_ord(&A,p4);
	insere_ord(&A,p5);
	
	printf("%d\n", um_filho(A));	
	
	
	libera_arvore(&A);
	return 0;
}