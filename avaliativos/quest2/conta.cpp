#include <stdio.h>
#define MAX 21

int conta(int n, int W[], int k){
  
  if(n == -1)
    return 0;
    
  else if(k == W[n])
    return 1 + conta(n-1, W, k);
    
  else
    return conta(n-1, W, k);
}

int main(){
  int n, k, W[MAX];

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &W[i]);
  }
  scanf("%d", &k);
  n = n - 1;
  printf("%d\n", conta(n, W, k));
  
  return 0;
}