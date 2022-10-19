#include <stdio.h>

int piso_log2(int n){
  if(n == 1)
    return 0;
  else
    return piso_log2(n/2) + 1;
  
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", piso_log2(n));

  return 0;
}