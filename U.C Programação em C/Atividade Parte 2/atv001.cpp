#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int opcao;
	setlocale(LC_ALL, "");
	printf("\tCARD�PIO\n[ 1 ] - Caf�\n[ 2 ] - Ch�\n[ 3 ] - Suco\n[ 4 ] - Refrigerante\nInforme a op��o: ");
	scanf("%d", &opcao);
		system("cls");
	switch(opcao)
	{
		case 1:
			printf("Op��o selecionada:\t\n\aCaf�");
			break;
		case 2:
			printf("Op��o selecionada:\t\n\aCh�");
			break;
		case 3:
			printf("Op��o selecionada:\t\n\aSuco");
			break;
		case 4:
			printf("Op��o selecionada:\t\n\aRefrigerante");
			break;
		default:
			printf("Op��o invalido!");
			break;
	}	
	return 0;
}
