#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main( ){
	int prest,valorApagar, acres, desc, prej ;
    setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da prestação: ");
	scanf("%d", &prest );
	
	acres = (prest*0.15 );
	desc =  (acres*0.15 );
	valorApagar = (prest + acres);	
	
	printf("\nTendo em vista que com o devido atraso acrescentam-se %d reais" , acres );
	printf("\nSendo assim, o cliente pagará %d reais " , valorApagar);
	printf("\nSabe-se que com o desconto de 15%% o comerciante terá um prejuízo de %d reais " , desc);

} 
