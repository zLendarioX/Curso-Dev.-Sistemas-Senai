#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int numero;
	setlocale(LC_ALL,"");
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	if(numero%2 == 0 && numero != 0)
	{
		printf("Este número é par");
	} else if(numero%2 != 0 && numero != 0) {
		printf("Este número é impar");
	} else {
		printf("Erro: o número precisa ser diferente de zero");
	}
	return 0;
}
