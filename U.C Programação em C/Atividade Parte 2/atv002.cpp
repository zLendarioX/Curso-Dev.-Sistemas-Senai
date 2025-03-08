#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char opcao;
	setlocale(LC_ALL, "");
	printf("Informe uma letra: ");
	scanf("%c",&opcao);
		system("cls");
	switch(opcao)
	{
		case 'a':
		case 'e':	
		case 'i':
		case 'o':
		case 'u':
			printf("Vogal");
			break;
		default:
			printf("Consoante!");
			break;
	}	
	return 0;
}
