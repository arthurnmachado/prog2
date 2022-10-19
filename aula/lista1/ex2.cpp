/*
2) Escreva um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas
pessoas. Com os dados cadastrados, em seguida, localize uma pessoa através do seu CPF
(informado pelo usuário) e imprima o seu IMC (IMC = PESO/ALTURA^2).
Funcionalidade adicional 1: permita consultar várias vezes, até que se digite 0 (zero) para
terminar.
Funcionalidade adicional 2: crie um menu no programa para que, além de consultar IMC por
CPF, liste (IMC e nome) de todas as pessoas do sexo masculino.
*/

#include <stdio.h>
#define MAX 51

struct tipoPessoa{
  char nome[MAX];
  float peso;
  int cpf;
  char sexo;
};

int main(){
  int i, n;
  tipoPessoa pessoas[MAX];

  printf("Informe o numero de pessoas: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    printf("\nPessoa: %d\n", i+1);
    printf("");
  }
  
  return 0;
}