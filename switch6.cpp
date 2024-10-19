#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float prod, desc10,desc5, duasv,tresv,jur10;
	int cod;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor do produto: ");
	scanf("%f", &prod);
	
	printf("Digite o código método de pagamento: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 1: printf("À vista em dinheiro ou cheque, recebe 10%% de desconto");break;
		case 2: printf("À vista no cartão de crédito, recebe 5%% de desconto");break;
		case 3: printf("Em duas vezes, preço normal de etiqueta sem juros");break;
		case 4: printf("Em três vezes, preço normal de etiqueta mais juros de 10%%");break;
		default: printf("Código Inválido \nFim da Operação");
	}
	
	if(cod==1){
		   desc10=((prod)-(prod*0.1)); 
		    printf("\nDado o devido desconto, o produto ficará no valor de %.2f reais ", desc10);
	}else
	    if(cod==2){
	    	  desc5=((prod)-(prod*0.05));
	    	    printf("\nDado o devido desconto, o produto ficará no valor de %.2f reais", desc5);
		}else
		     if(cod==3){
		     	 duasv=(prod/2);
		     	    printf("\nNesta opção o cliente deverá pagar duas parcelas de %.2f reais, sem juros  ", duasv );
			 }else
			        if(cod==4){
			        	tresv=(prod/3);
			        	   jur10= ( (prod*0.1));
			        	     printf("\nNesta opção o cliente deverá pagar três parcelas de %.2f reais mais o valor de %2.f reais referente aos Juros ", tresv, jur10 );
					}
}
