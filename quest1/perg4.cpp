#include <math.h>
#include <stdio.h>

int main() {

  double a, b, c, delta, raiz1, raiz2;

  scanf("%lf %lf %lf", &a, &b, &c);

  delta = b * b - 4 * a * c;
  if (delta < 0) {
    printf("A equação não possui raízes reais \n");
    return 0;
  }

  raiz1 = ((b * -1) + sqrt(delta)) / 2 * a;
  raiz2 = ((b * -1) - sqrt(delta)) / 2 * a;

  printf("%.2f, %.2f \n", raiz2, raiz1);

  return 0;
}