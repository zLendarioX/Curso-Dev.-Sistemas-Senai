#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
	int x,o,r,y,n;
	do{
	printf("\tTABUADA\n\n[1] - Soma\n[2] - Divis�o\n[3] - Multiplica��o\n[4] - Divis�o\n[5] - Sair\n");
	scanf("%d",&o);
	system("cls");
	switch(o){
		case 1:
			printf("Digite um n�mero para a opera��o\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de soma com o n�mero %d\n\n\n",x);
			for(int i=1;i<=10;i++){
				r=i+x;
				printf("%d + %d = %d\n",x,i,r);
			}
			system("pause");
			system("cls");
			break;
		case 2:
			printf("Digite um n�mero para a opera��o\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de subtra��o com o n�mero %d\n\n\n",x);
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
			printf("Digite um n�mero para a opera��o\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de multiplica��o com o n�mero %d\n\n\n",x);
	        for(int i=1;i<=10;i++){
	        	printf("%d x %d = %d\n",i,x,i*x);
			}
			system("pause");
			system("cls");
			break;
		case 4:
			printf("Digite um n�mero para a opera��o\n");
	        scanf("%d",&x);
	        system("cls");
	        printf("Tabuada de divis�o com o n�mero %d\n\n\n",x);
	        n=x;
	        for(int i=1;i<=10;i++){
	            printf("%d � %d = %d\n",x,n,n/x);
	            n=n+x;
			}
			system("pause");
			system("cls");	
			break;
	    case 5:	
		   printf("Obrigado pela prefer�ncia!!");
			break;
		default:
			 printf("Digite uma op��o v�lida");
			break;	 		   	
	}
	} while(o!=5);
	return 0;
	}
