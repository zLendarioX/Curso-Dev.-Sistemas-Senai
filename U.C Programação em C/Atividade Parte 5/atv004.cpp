#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	double nota, media;
	
	
	do {
		system("cls");
		for(int i = 1; i <= 4; i++){
			printf("Informe a nota do %d° bimestre: ", i);
			scanf("%fl", &nota);
			media = media + nota;
			
		}
		media = media / 4;
		if(media < 7)
		{
			system("cls");
			printf("Aluno Reprovado!\n");
			system("pause");
		} else {
			system("cls");
			printf("Aluno Aprovado!\n");
			system("pause");
		}
	} while(media < 7);
	return 1;
}
