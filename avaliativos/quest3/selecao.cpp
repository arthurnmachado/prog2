#include <stdio.h>
#define MAX 101

void selection(int n, int v[MAX]){
  int min, aux;
  
  for(int i = 0; i < n-1; i++){
    min = i;
    for(int j = i+1; j < n; j++)
      if(v[j] < v[min])
        min = j;
    
    aux = v[i];
    v[i] = v[min];
    v[min] = aux;
  }

  printf("%d", v[0]);
  for(int i = 1; i < n; i++)
    printf(" %d", v[i]);
  printf("\n");
}

int main(){
  int n;
  scanf("%d", &n);
  int v[n];

  for(int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  selection(n , v);

  return 0;
}