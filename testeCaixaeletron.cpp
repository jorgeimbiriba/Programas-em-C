#include <stdio.h>
#include <locale.h>

main(){
	int valorSaque, nota100, nota50, nota20, nota10;
	
	printf("Digite o valor que deseja sacar (multiplo de 10): ");
    scanf("%d", &valorSaque);

    // Inicializa as variáveis para contar as notas
    nota100 = nota50 = nota20 = nota10 = 0;

    // Verifica se o valor de saque é múltiplo de 10
    if (valorSaque % 10 != 0) {
        printf("Por favor, insira um valor múltiplo de 10.\n");
        return 1; // Encerra o programa com erro
    }

    // Calcula o número de cada nota necessária
    if (valorSaque >= 100) {
        nota100 = valorSaque / 100;
        valorSaque %= 100;
    }
    if (valorSaque >= 50) {
        nota50 = valorSaque / 50;
        valorSaque %= 50;
    }
    if (valorSaque >= 20) {
        nota20 = valorSaque / 20;
        valorSaque %= 20;
    }
    if (valorSaque >= 10) {
        nota10 = valorSaque / 10;
        valorSaque %= 10;
    }

    // Exibe o resultado
    printf("Notas de R$100: %d\n", nota100);
    printf("Notas de R$50: %d\n", nota50);
    printf("Notas de R$20: %d\n", nota20);
    printf("Notas de R$10: %d\n", nota10);
}
