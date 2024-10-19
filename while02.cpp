#include <stdio.h>
main(){
	int num = 1, acm = 0;	
    while(num<=100){
		acm+=num; 
		num++;	
	}	
	printf("O resultado se trata de : %d  ",acm);
}
