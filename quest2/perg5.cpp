#include <stdio.h>

int main(){
  int mat[100][100], vet[100], sum[100]={0}, m, n, i, j;

  scanf("%d %d", &m, &n);
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &mat[i][j]);
    }
  }
  for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      sum[i] = sum[i] + (vet[j]*mat[i][j]);
    }
  }
  for(i = 0; i < m; i++){
    printf("%d", sum[i]);
  }
  return 0;
}