#include <stdio.h>
#include <locale.h>

int soma (int n){
	if(n==1)
		return 1;
	else
		return (2*n-1)+soma(n-1);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	printf("Digite a quantidade de n�meros desejados: ");
	scanf("%d",&n);
	
	printf("Soma dos %d primeiros n�meros �mpares: %d",n,soma(n));
    return 0;	
}
