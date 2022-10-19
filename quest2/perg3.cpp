#include <stdio.h>

int main(){
  int tam, i, num;
  scanf("%d", &tam);
  int vet[tam];

  for(i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }
  num = vet[0];
  for(i = 1; i < tam; i++){
    if(num <= vet[i]){
      printf("false \n");
      return 0;
    }
  }
  
  printf("true \n");
  return 0;
}