#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	
	int maior, menor, n[10];

	for(int i; i < 10; i++){
		printf("Informe %d° Número: ", i + 1);
		scanf("%d", &n[i]);
	}
	maior = n[0];
	menor = n[0];
	for(int i; i < 10; i++){
		if(n[i] > maior){
			maior = n[i];
		} else if(n[i] < menor){
			menor = n[i];
		}
	}
	system("cls");
	printf("Maior: %d\nMenor: %d",maior, menor);
	return 0;
}
