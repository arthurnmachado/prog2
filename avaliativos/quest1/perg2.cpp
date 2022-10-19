#include <stdio.h>
#include <string.h>
#define MAX 31
#define vMAX 5

struct tAluno{
  int matricula;
  char nome[MAX], materia[MAX];
};

int main(){
  tAluno alunos[vMAX];
  char pesquisa[MAX];
  
  for(int i = 0; i < vMAX; i++)
    scanf("%d %[^\n] %[^\n]", &alunos[i].matricula, alunos[i].nome, alunos[i].materia);

  scanf(" %[^\n]", pesquisa);
  for(int i = 0; i < vMAX; i++)
    if(strcmp(alunos[i].materia, pesquisa) == 0)
      printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
  
  return 0;
}