#include <stdio.h>

int main(){
  int n, par = 0, impar = 0;
  scanf("%d", &n);
  int v[n];

  for(int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  for(int i = 0; i < n; i++){
    if(v[i] % 2 == 0)
      par++;
    else
      impar++;
  }

  fprintf(saida1, "")

  return 0;
}