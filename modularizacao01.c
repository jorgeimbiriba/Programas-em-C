#include <stdio.h>
#include <locale.h>

double velocidMedia (double result){
	double espInicial,espFinal,tempFinal,tempInicial,varEsp,varTemp;
	
	printf("Digite o espa�o inicial: ");
	scanf("%f",&espInicial);
	
	printf("\nDigite o espa�o final: ");
	scanf("%f",&espFinal); 
	
	printf("\nDigite o tempo inicial:");
	scanf("%f",&tempInicial);
	
	printf("\nDigite o tempo final:");
	scanf("%f",&tempFinal);
		
    varEsp = (espFinal-espInicial);
    varTemp = (tempFinal-tempInicial);
    
    result = (varEsp/varTemp);
    
    return result;	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	double calc, result;
	
	calc = velocidMedia(result);
    printf("\nVelocidade M�dia: %.2f", calc);
    
    return 0;
}
