#include <stdio.h>
#include <math.h>

int main() {
    int num, i = 2;
    double raiz;

    printf("Digite um n�mero inteiro maior que 1: ");
    scanf("%d", &num);

    // Verifica��es iniciais
    if (num <= 1) {
        printf("%d n�o � um n�mero primo.\n", num);
        return 0;
    }

    if (num == 2) {
        printf("%d � um n�mero primo.\n", num);
        return 0;
    }

    // Calculando a raiz quadrada
    raiz = sqrt(num);

    // Verificando divisibilidade at� a raiz quadrada usando while
    while (i <= raiz) {
        if (num % i == 0) {
            printf("%d n�o � um n�mero primo.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d � um n�mero primo.\n", num);
    return 0;
}
