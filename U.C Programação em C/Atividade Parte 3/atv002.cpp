#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int numero[2];
	printf("Informe o início e o fim: ");
	scanf("%d %d", &numero[0], &numero[1]);
		system("cls");
	if(numero[0] < numero[1])
	{
		for(int i = numero[0]; i <= numero[1]; i++){
			printf("\a\n%d", i);
		}
	} else if(numero[0] > numero[1])
	{
		for(int i = numero[0]; i >= numero[1]; i--){
			printf("\a\n%d", i);
		}
	} else {
		printf("%d", numero[0]);
	}
	return 0;
}
