#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 	int num;
int main () {
	setlocale(LC_ALL, "");
	printf("Informe um número: ");
	scanf("%d", &num);
	system("cls");
	for (int i = 1; i <= 10; i++){
		printf("%d ÷ %d = %d\n", num * i, num, i);
	}
	return 0; 
}
