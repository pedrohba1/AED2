#ifndef ARVORE_AVL
#define ARVORE_AVL

typedef struct registro reg;
typedef struct arv* Arv;

reg* aloca_registro(char* id, int x, int y, int trafego);
void printa_registro(reg *r);
Arv cria_vazia();

#endif