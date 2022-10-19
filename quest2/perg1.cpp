#include <stdio.h>

int main(){
  int tam, i;
  scanf("%d", &tam);
  int vet[tam];

  for(i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }

  for(i = 0; i < tam-1; i++){
    if(vet[i] >= vet[i+1]){
      printf("falso \n");
      return 0;
    }
  }
  printf("verdadeiro \n");
  return 0;
}