#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	int num1,num2,num3,maior;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite tr�s n�meros inteiros: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1<=0 || num2<=0 || num3<=0){
		printf("ERRO \nN�mero Inv�lido");
	}
	
	maior=num1;
	if (num2>maior){
        maior=num2;
   }else{ 
        if(num3>maior){ 
            maior=num3;
	  }	  
	}     
	     printf("O maior numero digitado �: %d\n", maior);	
}
