#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int diferenca;
	int numero[2];
	setlocale(LC_ALL,"");
	printf("Informe dois n�meros: ");
	scanf("%d %d", &numero[0], &numero[1]);
	
	if(numero[0] > numero[1])
	{
		diferenca = numero[0] - numero[1];
		printf("A diferen�a entre %d e %d e de %d", numero[0], numero[1], diferenca);
	} else if(numero[0] < numero[1]){
		diferenca = numero[1] - numero[0];
		printf("A diferen�a entre %d e %d e de %d", numero[0], numero[1], diferenca);
	} else {
		printf("Esses valores s�o inguais: ");
	}
	return 0;
}
