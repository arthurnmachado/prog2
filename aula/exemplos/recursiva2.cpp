#include <stdio.h>

int som(int n){
  if(n < 10)
    return n;
  return (n%10) + som(n/10);
}

int main(){
  printf("%d", som(1234));

  return 0;
}