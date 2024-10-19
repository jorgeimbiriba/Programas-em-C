#include <stdio.h>
#include <math.h>

main(){
	int num, exp = 0;
	
	while(exp<=15){
		num = pow(3,exp);
		printf("3^%d = %d\n", exp, num);
		exp++;
	}
	
}
