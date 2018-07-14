#include <stdio.h>
#include "hash.h"

int main() {
	Hash* hash = criaHash(5);
	struct aluno a, b, c, x;
	
	a.nome = "Matheus";
	a.idade = 20;
	a.matricula = 123412;

	b.nome = "Pedro";
	b.idade = 20;
	b.matricula = 23223;

	c.nome = "Joao";
	c.idade = 20;
	c.matricula = 8888;

	insereHashEnderAberto(hash, a);
	insereHashEnderAberto(hash, b);
	insereHashEnderAberto(hash, c);

	printf("%d\n", buscaHashEnderAberto(hash, 123412, &x));
	printaRegistro(&x);
	printf("%d\n", buscaHashEnderAberto(hash, 8888, &x));
	printaRegistro(&x);

	printaHash(hash);
	
	return 0;
}