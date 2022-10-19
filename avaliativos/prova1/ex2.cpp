#include <stdio.h>
#include <string.h>
struct tProduto{
    char nome[100];
    float valor;
} ;
int main(){
    int n, qtd, m, p;
    char busca[100];
    float total;
    
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        total = 0.0;
        scanf("%d", &m);
        tProduto produtos[m];
        for(int j = 0; j < m; j++){
            scanf("%s %f", produtos[j].nome, &produtos[j].valor);
        }
        scanf("%d", &p);
        for(int j = 0; j < p; j++){
            scanf("%s %d", busca, &qtd);
            for(int k = 0; k < m; k++){
                if(strcmp(produtos[k].nome, busca) == 0){
                total = total + qtd*produtos[k].valor;
                break;
                }
            }
        }
        printf("R$ %.2f\n", total);
    }
    return 0;
}