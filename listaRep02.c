#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int i, n1,n2;
	
	printf("Digite qual vai ser o intervalo desse conjunto sequencial de n�meros inteiros\n");
	
	printf("Come�o: ");
	scanf("%d",&n1);
	
	printf("Fim: ");
	scanf("%d",&n2);
	
	int acmPares=0,acmImpar=0;
	
	for(i=n1;i<=n2;i++){
		if(i%2==0){
			acmPares++;
			//printf("[%d]",i);
		}
		if(i%2!=0 && i%3==0 && i%7==0){
			acmImpar++;
			//printf("\n[%d]",i);
		}
		
	}
	
	//media=(acmPares+acmImpar/2);
	
	printf("\nA quantidade de n�meros pares: %d",acmPares);
    printf("\nA quantidade de n�meros �mpares e divis�veis por 3 e 7: %d",acmImpar); 
    
return 0;    
}
