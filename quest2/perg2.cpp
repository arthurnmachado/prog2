#include <stdio.h>

int main(){
  int tamA, tamB, i, j, contador;
  scanf("%d", &tamA);
  int A[tamA];

  for(i = 0; i < tamA; i++){
    scanf("%d", &A[i]);
  }
  scanf("%d", &tamB);
  int B[tamB];
  for(i = 0; i < tamB; i++){
    scanf("%d", &B[i]);
  }

  contador = 0;
  for(i = 0; i < tamA; i++){
    for(j = 0; j < tamB; j++){
      if(A[i] == B[j]){
        printf("%d ", A[i]);
        contador++;
      }
    }
  }
  if(contador == 0){
    printf("vazia \n");
    return 0;
  }
  printf("\n");
  return 0;
}