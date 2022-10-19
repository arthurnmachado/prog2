#include <stdio.h>
#define MAX 61
#define vMAX 5

struct tipoAgenda{
  char compromisso[MAX];
  int dia, mes, ano;
};

int main(){
  int m, a;
  tipoAgenda agenda[vMAX];

  for(int i = 0; i < vMAX; i++){
    scanf(" %[^\n]", agenda[i].compromisso);
    scanf("%d/%d/%d", &agenda[i].dia, &agenda[i].mes, &agenda[i].ano);
  }
  
  do{
    scanf("%d/%d", &m, &a);
    for(int i = 0; i < vMAX; i++)
      if(m == agenda[i].mes && a == agenda[i].ano)
        printf("%s\n", agenda[i].compromisso);

    
  }while(m != 0 && a != 0);
  
  return 0;
}