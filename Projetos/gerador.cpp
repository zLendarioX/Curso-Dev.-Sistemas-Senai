#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int opc, num;
	do {
		system("cls");
		printf("Bem-vindo ao Gerador de Sequ�ncias\nMenu: \n");
		printf("[ 1 ] - Sequ�ncia de n�meros pares\n");
		printf("[ 2 ] - Sequ�ncia de n�meros impares\n");
		printf("[ 3 ] - Sequ�ncia de n�meros primos\n");
		printf("[ 4 ] - Sequ�ncia de n�meros Fibonacci\n");
		printf("[ 5 ] - Nenhum/Sair\n");
		printf("Qual sequ�ncia deseja gerar: \n");
		scanf("%d", &opc);
		system("cls");
		if(opc != 5){
			do {
				printf("At� onde essa sequ�ncia deve continuar?\n(Deve ser maior ou ingual a zero): ");
				scanf("%d", &num);
			} while(num < 0);
		}
		switch(opc) {
			
			case 1:
				for(int i; i < num; i++){
					if(i%2 == 0){
						printf("%d ", i);
					}
				}
				printf("\n");
				system("pause");
				break;
			case 2:
				for(int i; i < num; i++){
					if(i%2 != 0){
						printf("%d ", i);
					}
				}
				printf("\n");
				system("pause");
				break;
			case 3:
				for(int i; i < num; i++){
					for(int n; n < i; n++){
						if(i%n == 0){
							cont ++;
						}
					}
					if(cont == 2){
						
					}
				}
				printf("\n");
				system("pause");
				break;
			case 4:
				break;
			case 5:
				break;
		}	
	} while(opc != 5);
	return 0;
}
