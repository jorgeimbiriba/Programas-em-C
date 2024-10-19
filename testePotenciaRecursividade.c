#include <stdio.h>
#include <math.h>

int potencia(int x,int n){
	if(n==0){
		return 1;
	}else
	  return x*pow(x,n-1);
}

//Teste do Algoritmo de Euclides
/*int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}*/

int main(){
	int x,n;
	
	scanf("%d",&x);
	
	scanf("%d",&n);
	
	printf("Resultado: %d",potencia(x,n));
return 0;	
}
