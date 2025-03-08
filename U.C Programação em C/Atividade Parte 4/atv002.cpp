#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	int numero;
	printf("Informe o fim: ");
	scanf("%d", &numero);
		system("cls");
	if(numero > 1)
	{
		for(int i = 1; i <= numero; i++){
			printf("%d ", i);
		}
	} else {
		for(int i = i; i >= numero; i--){
			printf("%d ", i);
		}
	}
	return 0;
}
