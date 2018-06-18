#ifndef ARVORES_H_INCLUDED
#define ARVORES_H_INCLUDED


typedef struct no* Arv;
typedef struct registro Registro;
Arv cria_vazia();
Arv cria_arvore(Registro * rnew, Arv esq, Arv  dir);
int arvore_vazia(Arv A);
int libera_arvore(Arv *A);
Registro* maior(Arv A);

#endif // ARVORES_H_INCLUDED
