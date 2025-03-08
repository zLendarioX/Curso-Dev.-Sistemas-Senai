#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	char senha[25];	
	while (strcmp(senha, "senai"))
	{
		printf("qual é a melhor a escola técnica do Brasil?: ");
		scanf("%s", &senha);
	}
	system("cls");
	printf("Você acertou");
	return 0;
}
