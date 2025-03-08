#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	char time[20];
	setlocale(LC_ALL, "");
	
	printf("Informe um time de futebol: ");
	scanf("%[^\n]", &time);

	for(int i = 1; i <= 10; i++)
	{
		printf("\n%s", time);
	}
	return 0;
}

