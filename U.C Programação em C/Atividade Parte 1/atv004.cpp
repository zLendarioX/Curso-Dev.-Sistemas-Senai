#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int idade;
	char nome;
	setlocale(LC_ALL,"");
	printf("Informe seu nome e depois sua idade: ");
	scanf("%s %d", &nome, &idade);
	
	if(idade >= 16){
		printf("Pode votar");
	} else {
		printf("Não pode votar");
	}
	return 1;
}
