#include <stdio.h>
#include <stdlib.h>
#include "arvores.h"



int main() {

	Arv T;
	T = cria_vazia();
	T = cria_arvore(3, NULL, NULL);

	Arv T2;
	T2 = cria_arvore(2,T,NULL);

	return 0;
}