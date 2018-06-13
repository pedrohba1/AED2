#ifndef ARVORES_H_INCLUDED
#define ARVORES_H_INCLUDED

typedef struct no* Arv;


Arv cria_vazia();
Arv cria_arvore(int elem, Arv esq, Arv  dir);
int arvore_vazia(Arv T);


#endif // ARVORES_H_INCLUDED
