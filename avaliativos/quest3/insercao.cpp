#include <stdio.h>
#define MAX 101
#define LET 21

struct tAluno{
  int num;
  char nome[LET];
};

void insertion(int n, tAluno v[MAX]){
  int x, j;
  char pal[LET];

  for(int i = 0; i < n; i++){
    x = v[i].num;
    

    for(j = i - 1; j >= 0 && v[j].num > x; j--)
      v[j+1] = v[j];
    v[j+1].num = x;
  }
}

int main(){
  int n;
  scanf("%d", &n);
  tAluno alunos[n];

  for(int i = 0; i < n; i++)
    scanf(" %[^\n][^ ]%d", alunos[i].nome, &alunos[i].num);
  insertion(n, alunos);

  printf("%d", v[n-1]);
  for(int i = n-2; i >=0; i--)
    printf(" %d", v[i]);
  printf("\n");
  
  return 0;
}