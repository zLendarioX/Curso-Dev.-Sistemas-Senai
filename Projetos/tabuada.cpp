#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
	int x,o,r,y,n;
	do{
	printf("\tTABUADA\n\n[1] - Soma\n[2] - Divisão\n[3] - Multiplicação\n[4] - Divisão\n[5] - Sair\n");
	scanf("%d",&o);
	system("cls");
	switch(o){
		case 1:
			printf("Digite um número para a operação\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de soma com o número %d\n\n\n",x);
			for(int i=1;i<=10;i++){
				r=i+x;
				printf("%d + %d = %d\n",x,i,r);
			}
			system("pause");
			system("cls");
			break;
		case 2:
			printf("Digite um número para a operação\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de subtração com o número %d\n\n\n",x);
	        y=x;
			for(int i=1;i<=10;i++){
			y++;
			r=y-x;
			printf("%d - %d = %d\n",x,y,r);	
			}
			system("pause");
			system("cls");
			break;
		case 3:
			printf("Digite um número para a operação\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de multiplicação com o número %d\n\n\n",x);
	        for(int i=1;i<=10;i++){
	        	printf("%d x %d = %d\n",i,x,i*x);
			}
			system("pause");
			system("cls");
			break;
		case 4:
			printf("Digite um número para a operação\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de divisão com o número %d\n\n\n",x);
	        n=x;
	        for(int i=1;i<=10;i++){
	            printf("%d ÷ %d = %d\n",x,n,n/x);
	            n=n+x;
			}
			system("pause");
			system("cls");	
			break;
	    case 5:	
		   printf("Obrigado pela preferência!!");
			break;
		default:
			 printf("Digite uma opção válida");
			break;	 		   	
	}
	} while(o!=5);
	return 0;
	}
