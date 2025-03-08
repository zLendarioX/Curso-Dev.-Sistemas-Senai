#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

bool urnaLigada = true;
int acaoAtual = 0;
int votos[4];
char Candidato1[50] = "Ninguem", Candidato2[50] = "Ninguem", Candidato3[50] = "Ninguem";
int opcaoMenu;
int idCand[4];
int main() {
	setlocale(LC_ALL, "");
	
	do{
		if(acaoAtual == 0){
			system("cls");
			printf("\tUrna Eleitoral\n");
			printf("--------------------------------\n");
			printf("[ 1 ] - Cadastrar Candidato\n");
			printf("[ 2 ] - Mostrar Zerésima\n");
			printf("[ 3 ] - Iniciar Votacao\n");
			printf("[ 4 ] - Finalizar Sistema\n");	
		}
		printf("Oque Deseja Fazer?: ");	
		scanf("%d", &opcaoMenu);
		getchar();
		system("cls");
		switch(opcaoMenu){
			case 1:
				if(acaoAtual == 0){
					int passou = 1;
					printf("\tUrna Eleitoral\n");
					printf("--------------------------------\n");
					printf("Informe o Nome do Candidato:\n ");
					if(strcmp(Candidato1, "Ninguem") == 0){
						scanf("%[^\n]", &Candidato1);
						passou = 1;
					} else if(strcmp(Candidato2, "Ninguem") == 0){
						scanf("%[^\n]", &Candidato2);
						passou = 2;
					} else if(strcmp(Candidato3, "Ninguem") == 0){
						scanf("%[^\n]", &Candidato3);
						passou = 3;
					} else {
						system("pause");
						printf("\tUrna Eleitoral\n");
						printf("--------------------------------\n");
						printf("Erro: Máximo de candidatos atigidos\n");
						system("pause");
						passou = 0;
					}
					system("cls");
				 	if(passou > 0){
						printf("Informe o Número do Candidato:\n ");
						scanf("%d", &idCand[passou]);
					}
					system("cls");
					printf("\tUrna Eleitoral\n");
					printf("--------------------------------\n");
					printf("O candidato foi cadastrado");
				}
				break;
			case 2:
				if(acaoAtual == 0){
					system("cls");
					printf("\tUrna Eleitoral\n");
					printf("--------------------------------\n");
					printf("Nome - Número - Votos\n");
					printf("%s - %d - %d\n", Candidato1, idCand[1], votos[1]);
					printf("%s - %d - %d\n", Candidato2, idCand[2], votos[2]);
					printf("%s - %d - %d\n", Candidato3, idCand[3], votos[3]);
				}
				break;
			case 3:
				
			
		}
	} while (urnaLigada == true);
	return 0;
}

