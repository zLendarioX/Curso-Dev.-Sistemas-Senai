#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);
	int i = 1;
	if(num < 0)
	{
		while(num < 0) {
			printf("O número deve ser maior que zero: ");
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
