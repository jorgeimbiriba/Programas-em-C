#include <stdio.h>

main(){
	double S=0.0;
    int n, sinal = 1;
	
    for ( n = 1; n <= 10; n++) {
        S += sinal * ((double)n / (n * n));
        sinal *= -1;  // Alterna o sinal
    }

	
	printf("S: %.15f",S);
	
return 0;	
}
