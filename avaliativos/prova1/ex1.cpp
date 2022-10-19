#include <stdio.h>
#define MAX 31

int ehPrimo(int num) {
  if(num == 1)
    return 0;
  for (int i = 2; i < num; i++)
    if (num % i == 0) {
      return 0;
    }
  return 1;
}

int temPrimo(int n, int v[MAX]) {
  if (ehPrimo(v[n]) == 1)
    return 1;
  if (n > 0) {
    return temPrimo(n - 1, v);
  }
  return 0;
}

int main() {
  int n, v[MAX] = {0}, var;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  n = n - 1;
  var = temPrimo(n, v);
  if(var == 1)
    printf("Sim\n");
  else
    printf("Nao\n");

  return 0;
}