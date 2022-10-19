#include<stdio.h>

#define NUMQ 5


int acertos(char *gab, char *resp);

// struct para o vetor de acertos de cada aluno
struct tAluno{
  char respostas[NUMQ];
};

int main()
{
	char gabarito[NUMQ+1];	
	
	int n;	// numero de alunos
	int i;
  tAluno alunos[n];

	// leitura do gabarito
	printf("Informe o gabarito: ");
	scanf(" %s", gabarito);
  printf("%s", gabarito);
	
	// leitura da quantidade de alunos
	printf("\nInforme qtde de alunos: ");
	scanf("%d", &n);

  // leitura das respostas de cada aluno
  i = 0;
  for(tAluno *in = alunos; in < alunos+n; in++){
    printf("\nInforme as respostas do aluno %d: ", (i++ +1));
    scanf(" %s", in->respostas);
  }
  printf("\n");
  
  // impressão do total de acertos de cada aluno
  i = 0;
  for(tAluno *in = alunos; in < alunos+n; in++){
    printf("Numero de acertos do aluno %d: %d\n", i++ +1, acertos(gabarito, in->respostas));
  }
  
	return 0;
}

int acertos(char *gab, char *resp){
  int total = 0;
  char *g = gab, *r = resp;
  
  while(g < gab+NUMQ){
    if (*g++ == *r++)
      total++;
  }
  
  return total;
}