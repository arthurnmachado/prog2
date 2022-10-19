/*
1) Escreva um programa que cadastre o nome, a matrícula e duas notas de N alunos
(N≤50). Em seguida, imprima a matrícula, o nome e a média de cada um deles.
*/

#include <stdio.h>
#define MAX 51

struct tipoAluno{
  char nome[MAX];
  long int matricula;
  float nota1, nota2;
};

int main(){
  int i, n;
  float media;
  tipoAluno alunos[MAX];

  printf("Informe a quantidade de alunos: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    printf("Aluno(a): %d\n", i+1);
    printf("Nome: ");
    scanf(" %[^\n]", alunos[i].nome);
    printf("Matricula: ");
    scanf("%ld", &alunos[i].matricula);
    printf("Nota 1: ");
    scanf("%f", &alunos[i].nota1);
    printf("Nota 2: ");
    scanf("%f", &alunos[i].nota2);
  }

  for(i = 0; i < n; i++){
    media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    
    printf("\nAluno(a): %d\n", i+1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matricula: %ld\n", alunos[i].matricula);
    printf("Media: %.2f\n", media);
  }
  
  return 0;
}