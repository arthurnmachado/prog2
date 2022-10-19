#include <stdio.h>

int potencia(int x, int n){
  if(n==0 || x==1)
    return 1;
  
  if(n == 1)
    return x;

  return x * potencia(x, n-1);
}

int main(){
  int x, n;
  
  scanf("%d%d", &x, &n);
  printf("%d\n", potencia(x, n));
  
  return 0;
}