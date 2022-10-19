#include <stdio.h>

int media(int vetor[], int n){
  if(n == 0)
    return vetor[n];

  else
    return vetor[n] + media(vetor, n-1);
  
}

int main(){
  int n;
  scanf("%d", &n);
  int vetor[n];

  for(int i = 0; i < n; i++)
    scanf("%d", &vetor[i]);

  printf("%d", media(vetor, n)/n);
  return 0;
}