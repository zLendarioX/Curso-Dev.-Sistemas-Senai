#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int i = 0, num = 5;
	while(num%2 != 0){
		printf("Informe um número: ");
		scanf("%d", &num);
	}
	printf("Resto 0");
	return 0;
}
