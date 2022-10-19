#include <stdio.h>
#define DIM 100
#define MAX 50
/* Recebe um inteiro positivo n e n nomes, telefones e datas de
aniversário, recebe uma data de consulta e mostra os nomes
e telefones das pessoas que aniversariam nesta data */

struct tipoData{
	int dia;
	int mes;
	int ano;	
};

struct tipoAgenda{
	char nome[MAX+1];
	int telefone;
	tipoData aniver;
};

int consulta(tipoData data, int n, tipoAgenda agenda[]){
  int i, achou = 0;
  
  for (i = 0; i < n; i++)
	if (agenda[i].aniver.dia == data.dia && agenda[i].aniver.mes == data.mes)
		achou = 1;

  return achou;
}

int leitura(int n, tipoAgenda agenda[]){
  int i;
  printf("n = %d", n);
  
  for (i = 0; i < n; i++) {
	  printf("\nAmigo(a): %3d\n", i+1);
		printf(" Nome : ");
		scanf(" %[^\n]", agenda[i].nome);
		printf(" Telefone : ");
		scanf("%d", &agenda[i].telefone);
		printf(" Aniversário: ");
		scanf("%d/%d/%d", &agenda[i].aniver.dia, &agenda[i].aniver.mes,
		&agenda[i].aniver.ano);
	}
  
  return 0;
}

int main()
{
	tipoAgenda agenda[DIM];
	int i, n;
	tipoData data;

	printf("Informe a quantidade de amigos: ");
	scanf("%d", &n);

  leitura(n, agenda);

	printf("\nInforme uma data (dd/mm): ");
	scanf("%d/%d", &data.dia, &data.mes);
  while(data.dia != 0 && data.mes != 0){
    if(consulta(data, n, agenda) == 0)
      printf("Nenhum aniversariante foi encontrado");
    else{
      printf("Achou\n");
      return 0;
    }
      
    
    printf("\nInforme uma data (dd/mm) -- (00/00) para encerrar):");
    scanf("%d/%d", &data.dia, &data.mes);
  }
  
	return 0;
}