#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int maior, numero, menor;
	setlocale(LC_ALL, "");
	printf("Informe seu 1� n�mero: ");
	scanf("%d", &maior);
	menor = maior;
	for(int i = 2; i <= 50; i++){
		printf("Informe seu %d� n�mero: ", i);
		scanf("%d", &numero);
		if(numero > maior)
		{
			maior = numero;
		}
		if(numero < menor)
		{
			menor = numero;
		}
	}
	system("cls");
	printf("%d � o maior valor digitado\n%d e o menor valaor digitado!", maior, menor);
	return 0;
}
