#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"



int main() {

	Arv A;
	A = cria_vazia();
	A = cria_arvore(3, NULL, NULL);

	Arv A2;
	A2 = cria_arvore(2,A,NULL);

	busca(A2,3);
	return 0;
}