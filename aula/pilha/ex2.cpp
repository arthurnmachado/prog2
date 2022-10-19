#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include"fila.h"
#include"pilha.h"

void gerarLista(celulaF *L){
  celulaF *i1 = NULL, *f1 = NULL;
  celula *P = NULL;

  while(L != NULL){
    if(toupper(L->chave) >= 'A' && toupper(L->chave) <= 'Z')
      enfileirar(toupper(L->chave), i1, f1);
    else if(L->chave >= '0' && L->chave <= '9')
      empilhar(L->chave, P);
    L = L->prox;  
  }
  imprimeF(i1);
  imprime(P);

  for(celula *i = P; i != NULL; i = i->prox)
    enfileirar(i->chave, i1, f1);

  imprimeF(i1);
}

int main()
{
  char caracter;
  celulaF *ini = NULL, *fim = NULL, *novalista = NULL;

  printf("Digite uma sequencia de caracteres alternando letra e algarismo: ");
  scanf("%c", &caracter);
  while(caracter != '\n')
  {
    enfileirar(caracter, ini, fim); 
    scanf("%c", &caracter);
  }
  imprimeF(ini);
  gerarLista(ini);
  
  return 0;
}