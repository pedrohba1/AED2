#ifndef ARVORE_AVL
#define ARVORE_AVL

typedef struct registro reg;
typedef struct no* Arv;

reg* aloca_registro(char* id, int x, int y, int trafego);
void printa_registro(reg *r);
Arv cria_vazia();
Arv cria_arv(reg* r, Arv sae, Arv sad);
void exibe_arv(Arv A);
void libera_arv(Arv* A);

#endif