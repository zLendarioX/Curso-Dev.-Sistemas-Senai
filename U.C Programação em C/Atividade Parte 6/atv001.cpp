#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 

int main(){
	setlocale(LC_ALL,"");
	int n[5], cont = 0;
	for (int i=0; i<=4; i++){
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n[i]);
	} 
	system("pause");
	system("cls");
	for (int i=0;i<=4;i++){
		if (n[i]%2==0){
			printf("%d\n",n[i]);
			cont ++;
		}
	
	}
	system("pause");
	system("cls");
	printf("\n%d N�meros pares", cont);
	return 0;
}
