#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 	int num, i = 1;
int main () {
	setlocale(LC_ALL, "");
	printf("Informe um número: ");
	scanf("%d", &num);
	system("cls");
	while(i < 11){
		printf("%d ÷ %d = %d\n", num * i, num, i);
		i++;
	}
	return 0; 
}
