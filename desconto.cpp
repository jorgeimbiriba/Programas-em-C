#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	float desc10, desc15,desc20 , valorComp;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o valor total da compra no estabelecimento: ");
	scanf("%f",&valorComp);
	
	if(valorComp>100){
		desc10=((valorComp)-(valorComp*0.1));
		printf("\nVocê receberá um desconto de 10%% e o pagamento será de: %2.f ", desc10);
	}else{
		if(valorComp>200){
			desc15=((valorComp)-(valorComp*0.15));
		    printf("\nVocê receberá um desconto de 15%% e o pagamento será de: %2.f ", desc15);
		}else{
			if(valorComp>300){ 
			      desc20=((valorComp)-(valorComp*0.2));
		          printf("\nVocê receberá um desconto de 20%% e o pagamento será de: %2.f ", desc20);
			}
		}
	}
}
