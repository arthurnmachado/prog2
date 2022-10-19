// Programa: somaimpar.cpp
// Este programa lê dois números inteiros,
// inicio e fim e calcula a soma dos numeros
// inteiros ímpares entre inicio e fim,
// inclusive inicio e fim
// Declaração das biliotecas utilizadas
#include<stdio.h>

// início da função principal
int main() {
// declaração das variáveis utilizadas
int inicio, fim, soma, i;

// Passo 1. Leia a entrada e inicialize soma
  scanf("%d %d", &inicio, &fim);
  soma = 0;

// Passo 2. Calcule a soma em [inicio,fim]
// Passo 2.1. Verifique se inicio é impar

  if (inicio % 2 != 0){
    for(i = inicio; i <= fim; i = i+2){
      soma = soma + i;
    }
  }
  else{
    for(i = inicio+1; i <= fim; i = i+2){
      soma = soma + i;
    }
  }
  
// Passo 3. Imprima o resultado
   printf("%d\n", soma);

   return 0;

} // fim main