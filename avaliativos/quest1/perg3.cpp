#include <stdio.h>
#define MAX 16
#define vMAX 5

struct tElet{
  float potencia, tempo, consumo, relativo;
  char nome[MAX];
};

int main(){
  tElet eletros[vMAX];
  int dias;
  float consumo;

  for(int i = 0; i < vMAX; i++)
    scanf(" %[^\n] %f %f", eletros[i].nome, &eletros[i].potencia, &eletros[i].tempo);

  scanf("%d", &dias);

  consumo = 0;
  for(int i = 0; i < vMAX; i++)
    consumo = consumo + (eletros[i].potencia * eletros[i].tempo);

  consumo = consumo*dias;
  printf("%.2f\n", consumo);
  
  for(int i = 0; i < vMAX; i++){
    eletros[i].consumo = dias * (eletros[i].potencia * eletros[i].tempo);
    eletros[i].relativo = 100 * (eletros[i].consumo / consumo);
    printf("%.2f\n", eletros[i].relativo);
  }
  
  return 0;
}