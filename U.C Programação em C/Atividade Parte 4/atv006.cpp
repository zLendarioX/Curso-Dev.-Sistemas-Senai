#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	char senha[25];	
	while (strcmp(senha, "senai"))
	{
		printf("qual � a melhor a escola t�cnica do Brasil?: ");
		scanf("%s", &senha);
	}
	system("cls");
	printf("Voc� acertou");
	return 0;
}
