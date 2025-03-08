#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 	int maior, menor;
 	int num[3];
int main () {
	setlocale(LC_ALL, "");
	
	for(int i = 0; i < 3; i++){
		printf("Informe %d° valor: ", i + 1);
		scanf("%d", &num[i]);
		
	} maior = num[0]; menor = num[0];
	 
	for(int i = 0; i < 3; i++){
		if(maior < num[i])
		{
		 	maior = num[i];
		}
		if(menor > num[i]) {
		 	menor = num[i];
		}
	}
	system("cls");
	printf("O maior valor é %d e o menor valor é %d", maior, menor);
	return 0;
}
