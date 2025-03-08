#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int opcao;
	float numero[2];
	setlocale(LC_ALL, "");
	printf("Calculadora \n[ 1 ] - Soma\n[ 2 ] - Subtração\n[ 3 ] - Mutiplicacão\n[ 4 ] - Divisão\n");
	printf("Informe a opção desejada: ");
	scanf("%d",&opcao);
	printf("Informe dois números: ");
	scanf("%f %f", &numero[0], &numero[1]);
		system("cls");
	switch(opcao)
	{
		case 1:
		{
			printf("%d + %d = %d", numero[0], numero[1], numero[0] + numero[1]);
			break;		
		}
		case 2:
			printf("%d - %d = %d", numero[0], numero[1], numero[0] - numero[1]);
			break;
		case 3:
			printf("%d x %d = %d", numero[0], numero[1], numero[0] * numero[1]);
			break;
		case 4:
			printf("%d ÷ %d = %.2f", numero[0], numero[1], numero[0] / numero[1]);
			break;
		default:
			printf("Opção invalidade!");
			break;
	}	
	return 0;
}
