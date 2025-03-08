#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int numero;
	printf("Informe o fim: ");
	scanf("%d", &numero);
		system("cls");
	for(int i; i <= numero; i++){
		if(i%2 != 0){
			printf("%d ", i);
		}
	}
	return 0;
}
