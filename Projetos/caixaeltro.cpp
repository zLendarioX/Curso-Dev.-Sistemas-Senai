#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	int opcao;
	float mov, SaldoBancario;
	do {
		printf("---- CAIXA ELETRÔNICO ----\n[ 1 ] - Verificar Saldo\n[ 2 ] - Depositar Dinheiro\n[ 3 ] - Sacar Dinheiro\n[ 4 ] - Sair");
		printf("\n\tSelecione uma opção: ");
		scanf("%d", &opcao);
		system("cls");
		switch(opcao)
		{
			case 1:
				printf("Saldo Atual: %.2f\n", SaldoBancario);
				system("pause");
				break;
			case 2:
				printf("Digite a quantia que deseja depostitar: \n");
				scanf("%f", &mov);
				SaldoBancario = SaldoBancario + mov;
				printf("\nDeposito no valor de: R$ %.2f realizado com sucesso!", mov);
				system("pause");
				break;
			case 3:
				printf("Digite a quantia que deseja sacar: ");
				scanf("%f", &mov);
				if(SaldoBancario < mov) {
					printf("Você não possui esta quantia!\n");
					system("pause");
				} else {
					SaldoBancario = SaldoBancario - mov;
					printf("\nSaque Realizado com Sucesso!\n");
					system("pause");
				}
				break;
			case 4:
				break;
			default :
				printf("\n/tErro: selecione uma opção valída");
				system("pause");
		}
	} while (opcao != 4);
	system("cls");
	printf("Obrigado Por usar Nosso Sistema!");
	return 1;
}
