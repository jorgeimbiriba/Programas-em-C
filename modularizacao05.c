#include <stdio.h>
#include <locale.h>

float maiorValor(float n1,float n2,float n3){
	float maior=n1;

    if(n2>maior){
        maior=n2;
    }
    if (n3>maior){
        maior=n3;
    }
	
return maior;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3;
    float resultado;
	
	printf("Insira os três valores reais:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	
	resultado = maiorValor(n1,n2,n3);
	
	printf("\nO maior deles é: %.2f",resultado);

return 0;	
}

