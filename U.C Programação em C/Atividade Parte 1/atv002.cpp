#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int numero;
	setlocale(LC_ALL,"");
	printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	if(numero%2 == 0 && numero != 0)
	{
		printf("Este n�mero � par");
	} else if(numero%2 != 0 && numero != 0) {
		printf("Este n�mero � impar");
	} else {
		printf("Erro: o n�mero precisa ser diferente de zero");
	}
	return 0;
}
