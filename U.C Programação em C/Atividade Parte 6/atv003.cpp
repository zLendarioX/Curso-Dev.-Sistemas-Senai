#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	
	char nome[25];
	int cont = 0;
	printf("Diga um nome: ");
	scanf("%s", &nome);
	
	int str = strlen(nome);
	for(int i = 0; i <= str; i++){
		if(nome[i] == 'a' || nome[i] == 'A'){
			cont ++;
		}
	}
	system("cls");
	printf("Foram digitadas %d Letras A´s", cont);
	return 0;
}
