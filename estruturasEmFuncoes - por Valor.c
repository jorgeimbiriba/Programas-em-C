#include <stdio.h>
#include <string.h>
typedef struct {
int pecas;
float preco;
}Venda;

void imprimeTotal(Venda *v1, Venda *v2){
 Venda total;
 total.pecas=v1.pecas+*v2.pecas;
 total.precos=v1.preco+*v2.preco;
 printf("Nro de pe�as: %d\n", total.pecas);
 printf("Pre�o total: %.2f\n", total.preco);
}

int main(){
Venda v1={1,20}, v2={3,10};
 imprimeTotal(v1,v2);
 return 0;
}
