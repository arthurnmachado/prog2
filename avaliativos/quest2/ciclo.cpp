#include <stdio.h>

int ciclo(int n){
  if(n == 1){
      printf("1 ");
      return 1;
  }
  else if(n % 2 == 0){
    printf("%d ", n);
    return 1 + ciclo(n/2);
  }
  else{
    printf("%d ", n);
    return 1 + ciclo((n*3)+1);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", ciclo(n));

  return 0;
}