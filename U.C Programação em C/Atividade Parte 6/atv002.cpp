#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n[10];
	for (int i=0; i<= 9; i++){
		printf("Digite o %d° número: ",i+1);
		scanf("%d",&n[i]);
	} 
	system("pause");
	system("cls");
	for (int i=0;i<=9;i++){
		if (i%2 !=0){
			printf("Vetor[%d]: %d\n", i, n[i]);
		}
	}
	return 0;
}
