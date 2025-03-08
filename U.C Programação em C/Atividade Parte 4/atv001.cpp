#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	int i = 1, soma = 0;
	while(i < 51)
	{
		soma = soma + i; 
		i++;
	}
	printf("Soma Total: %d", soma);
	return 0;
}
