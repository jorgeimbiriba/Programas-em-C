#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

//Fun��o booleana
bool verificarPrimo(int n){
	int v;// v de verificador
	
	//1 n�o � primo
	if (n<=1) {
        return false;
    }
    
    //Verificador recebe 2 ; A condi��o � que se, e somente se, o quadrado do verificador for menor ou igual a n farr� o incremento 
    //2 � o �nico primo par
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
	
	printf("\nOs n�meros primos s�o: ");
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
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	
	printf("\nDigite o segundo n�mero:  ");
	scanf("%d",&n2);
	
	//Verifica realmente se n1 � menor que n2
	//Realiza troca de conte�do tal qual uma vari�vel auxiliar
	if (n1>n2) {
        int aux=n1;
        n1=n2;
        n2=aux;
    }
	
	soma=numPrimos(n1,n2);
	printf("\nO somat�rio dos n�meros primos presentes entre %d e %d �: %d",n1,n2,soma);
	
	return 0;
}
