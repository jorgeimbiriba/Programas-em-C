#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float prod, desc10,desc5, duasv,tresv,jur10;
	int cod;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor do produto: ");
	scanf("%f", &prod);
	
	printf("Digite o c�digo m�todo de pagamento: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 1: printf("� vista em dinheiro ou cheque, recebe 10%% de desconto");break;
		case 2: printf("� vista no cart�o de cr�dito, recebe 5%% de desconto");break;
		case 3: printf("Em duas vezes, pre�o normal de etiqueta sem juros");break;
		case 4: printf("Em tr�s vezes, pre�o normal de etiqueta mais juros de 10%%");break;
		default: printf("C�digo Inv�lido \nFim da Opera��o");
	}
	
	if(cod==1){
		   desc10=((prod)-(prod*0.1)); 
		    printf("\nDado o devido desconto, o produto ficar� no valor de %.2f reais ", desc10);
	}else
	    if(cod==2){
	    	  desc5=((prod)-(prod*0.05));
	    	    printf("\nDado o devido desconto, o produto ficar� no valor de %.2f reais", desc5);
		}else
		     if(cod==3){
		     	 duasv=(prod/2);
		     	    printf("\nNesta op��o o cliente dever� pagar duas parcelas de %.2f reais, sem juros  ", duasv );
			 }else
			        if(cod==4){
			        	tresv=(prod/3);
			        	   jur10= ( (prod*0.1));
			        	     printf("\nNesta op��o o cliente dever� pagar tr�s parcelas de %.2f reais mais o valor de %2.f reais referente aos Juros ", tresv, jur10 );
					}
}
