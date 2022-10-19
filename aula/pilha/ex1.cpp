#include <stdio.h>
#include <stdlib.h>

struct celula
{
    char chave;
    struct celula *prox;
};


void desalocar(celula *&lst)
{
    celula *aux;
    while(lst)
    {
        aux = lst;
        lst = lst->prox;
        free(aux);
    }
}


/*Função recebe o ponteiro para o topo da pilha, cria um novo nó(célula) para
armazenar x e coloca esse nó como topo da pilha*/
void empilhar(char c, celula *&lst)
{
    celula *nova;

    nova = (celula *) calloc(1, sizeof (celula));
    nova->chave = c;
    nova->prox = lst;
    lst = nova;
}

/*Função recebe o ponteiro para o topo da pilha, desempilha e retorna o valor do topo*/
char desempilhar(celula *&lst)
{
    celula *aux;
    char c;

    if(lst == NULL)
        return '0';
    else{
        c = lst->chave;
        aux = lst;
        lst = lst->prox;
        free(aux);
        return c;
    }
}


/*Função recebe o ponteiro para o topo da pilha e imprime todos os nós (células)
da pilha*/
void imprime(celula *lst)
{
    celula *p;

    for (p = lst; p != NULL; p = p->prox)
        printf("%c ", p->chave);
}

char analisar(char *exp)
{
  int i = 0;
  celula *pilha = NULL;
  char aux;

  while(exp[i] != '\0')
  {
    //parenteses
    if(exp[i] == '(')
      empilhar(')', pilha);
    else if(exp[i] == ')'){
      aux = desempilhar(pilha);
      if(aux != ')')
        return 'N';
    }
    //colchetes
    if(exp[i] == '[')
      empilhar(']', pilha);
    else if(exp[i] == ']'){
      aux = desempilhar(pilha);
      if(aux != ']')
        return 'N';
    }
    //chaves
    if(exp[i] == '{')
      empilhar('}', pilha);
    else if(exp[i] == '}'){
      aux = desempilhar(pilha);
      if(aux != '}')
        return 'N';
    }
    
    i++;
  }
  if(pilha != NULL){
    desalocar(pilha);
    return 'N';
  }
    
  else
    return 'S';
  
}

int main()
{
    int op;
    char exp[50];

    do
    {
      printf("\n 1 - Avaliar expressao");
        
      printf("\n 4 - Sair");
      printf("\n Opcao: ");
      scanf("%d", &op);

      if(op == 1)
      {
        printf("\nExpressao: ");
        scanf("%s", exp);
        printf("\n%c\n", analisar(exp));
      }

    }while(op != 4);

    return 0;
}