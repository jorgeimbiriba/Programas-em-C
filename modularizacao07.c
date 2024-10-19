#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

//Função booleana
bool verificarPrimo(int n){
	int v;// v de verificador
	
	//1 não é primo
	if (n<=1) {
        return false;
    }
    
    //Verificador recebe 2 ; A condição é que se, e somente se, o quadrado do verificador for menor ou igual a n farrá o incremento 
    //2 é o único primo par
	for (v=2;v*v<=n;v++) {
        if (n%v==0) {
            return false;
        }
    }
    return true;
}

int numPrimos(int n1,int n2){
	setlocale(LC_ALL,"Portuguese");
	int i,s=0;
	
	printf("\nOs números primos são: ");
    for(i=n1;i<=n2;i++){
    	if(verificarPrimo(i)){
    		s+=i;
    		printf("[%d] ",i);
		}
	}	
	return s;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1, n2,soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	
	printf("\nDigite o segundo número:  ");
	scanf("%d",&n2);
	
	//Verifica realmente se n1 é menor que n2
	//Realiza troca de conteúdo tal qual uma variável auxiliar
	if (n1>n2) {
        int aux=n1;
        n1=n2;
        n2=aux;
    }
	
	soma=numPrimos(n1,n2);
	printf("\nO somatório dos números primos presentes entre %d e %d é: %d",n1,n2,soma);
	
	return 0;
}
