#include <stdio.h>
#include <locale.h>

int calcularAnosParaUltrapassar(float altAnacleto, float crescAnacleto, float altFelisberto, float crescFelisberto){
    int anos=0;

    // Enquanto Felisberto n�o for maior que Anacleto
    while (altFelisberto <= altAnacleto) {
        altAnacleto+=crescAnacleto;
        altFelisberto+=crescFelisberto;
        anos++;
    }

    return anos;
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    float altAnacleto=1.50;
    float crescAnacleto=0.02;  // 2 cent�metros por ano
    float altFelisberto=1.10;
    float crescFelisberto=0.03;  // 3 cent�metros por ano

    int anosNecessarios=calcularAnosParaUltrapassar(altAnacleto, crescAnacleto, altFelisberto, crescFelisberto);

    printf("Ser�o necess�rios %d anos para que Felisberto seja maior que Anacleto.\n", anosNecessarios);

    return 0;
}

