#include <stdio.h> 
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num,result=1;
	
	while(1){
		scanf("%d",&num);
		if(num==0){
			break;
		}
	    result*=num;
	}
	printf("\nO produto dos números digitados é: %d",result);

return 0; 
}


