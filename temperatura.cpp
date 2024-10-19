#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float tempM,tempT,tempN,temp1, temp2, temp3,temp;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite qual foi a temperatura durante a manhã: ");
	scanf("%f", &tempM);
	
	printf("Digite qual foi a temperatura durante a tarde: ");
	scanf("%f", &tempT);
	
	printf("Digite qual foi a temperatura durante a noite: ");
	scanf("%f", &tempN);
	
	temp1=tempM;
	temp2=tempT;
	temp3=tempN;
	
	if(temp1>temp2){
		temp = temp1;
        temp1 = temp2;
        temp2 = temp;
	}else{
		 if (temp2>temp3){
		  	temp = temp2;
             temp2 = temp3;
             temp3 = temp;
		 } if(temp1>temp2){
		      temp = temp1;
              temp1 = temp2;
               temp2 = temp;
	}
	       printf("\nTemperaturas em ordem crescente:\n");
           printf("%.1f\n%.1f\n%.1f\n", temp1, temp2, temp3);
}
}
