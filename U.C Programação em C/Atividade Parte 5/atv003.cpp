#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	int num;
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	int i = 1;
	if(num < 0)
	{
		while(num < 0) {
			printf("O n�mero deve ser maior que zero: ");
			scanf("%d", &num);
		}
	}
	do {
		if(num%i == 0) {
			printf("%d ", i);
		}
		i++;
	} while(i <= num);
	
	return 1;
}
