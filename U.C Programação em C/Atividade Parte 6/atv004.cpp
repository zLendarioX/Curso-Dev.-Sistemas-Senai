#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	float media,n[7];
	for(int i = 0; i < 7; i++){
		printf("%d° Valor: ", i + 1);
		scanf("%f", &n[i]);
		media = media + n[i];
	}
	media = media / 7;
	printf("A média é: %.2f", media);
	return 0;
}
