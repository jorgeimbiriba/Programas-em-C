#include <stdio.h>

main(){
	double S = 0.0;
    int numerador = 1;
    int denominador = 1;

    // Usando um loop para calcular S
    for (denominador = 1; denominador <= 50; denominador++) {
        S += (double)numerador/denominador;
        numerador += 2;
    }

    printf("O valor de S: %.6f\n", S);

return 0;	
}
