#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int opcao;
	setlocale(LC_ALL, "");
	printf("\tCARDÁPIO\n[ 1 ] - Café\n[ 2 ] - Chá\n[ 3 ] - Suco\n[ 4 ] - Refrigerante\nInforme a opção: ");
	scanf("%d", &opcao);
		system("cls");
	switch(opcao)
	{
		case 1:
			printf("Opção selecionada:\t\n\aCafé");
			break;
		case 2:
			printf("Opção selecionada:\t\n\aChá");
			break;
		case 3:
			printf("Opção selecionada:\t\n\aSuco");
			break;
		case 4:
			printf("Opção selecionada:\t\n\aRefrigerante");
			break;
		default:
			printf("Opção invalido!");
			break;
	}	
	return 0;
}
