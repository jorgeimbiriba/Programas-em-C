#include <stdio.h>
main(){
	int num = 1, acm = 0;
	while (num<=500){
		if(num%2==0){
			acm+=num;					
		}
	    num++;	 
	}
	printf("\n%d",acm);	
}
