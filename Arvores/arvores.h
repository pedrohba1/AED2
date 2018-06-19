#ifndef ARVORES_H_INCLUDED
#define ARVORES_H_INCLUDED


typedef struct no* Arv;
typedef struct registro Registro;

void printa_registro(Registro* r);
Registro* aloca_registro(int idade, char nome[30]);
Arv cria_vazia();
Arv cria_arvore(Registro * rnew, Arv esq, Arv  dir);
int arvore_vazia(Arv A);
int libera_arvore(Arv *A);
int maior(Arv A);

#endif // ARVORES_H_INCLUDED
