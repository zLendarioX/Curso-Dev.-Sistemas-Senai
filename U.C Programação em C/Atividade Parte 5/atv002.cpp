#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL, "");
	
	int senha = 25, tentativas = 1;
	do {
		system("cls");
		printf("%d° Tentativa: ", tentativas);
		scanf("%d",&senha);
		
		if(senha < 1 || senha > 50)
		{
			printf("Senha entre 1 a 50\n");
			system("pause");
		}
		tentativas ++;
	} while(senha != 25);
	
	printf("Senha Correta!");
	return 1;
}
