#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int nota;
	setlocale(LC_ALL, "");
	printf("Informe uma nota: ");
	scanf("%d",&nota);
	system("cls");
	switch(nota)
	{
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
		case 7:
			printf("B");
			break;
		case 6:
		case 5:
			printf("C");
			break;
		case 4:
		case 3:
			printf("D");
			break;
		case 2:
		case 1:
		case 0:
			printf("F");
			 break;
		default:
			printf("Nota invalida!");
			break;
	}	
	return 0;
}
