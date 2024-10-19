#include <stdio.h>

int main(){
	int ano1,ano2;
	
	printf("Digite o primeiro ano: ");
	scanf("%d",&ano1);
	
	printf("\nDigite o segundo ano: ");
	scanf("%d",&ano2);
	
	if (ano1 > ano2) {
        printf("O primeiro ano nao pode ser maior que o segundo.\n");
        return 1;
    }
	
	int i,dias=0;
	
	for(i=ano1;i<=ano2;i++){
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
        dias+=366;
          } else {
            dias+=365;
        }
	}
	
	printf("%d",dias);
	
	
return 0;
	
}
