#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o

int main()
{
	int opcao=0; //Definindo vari�veis
	int x=1;
	
	for(x=1;x=1;)
	{
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("### Cart�rio da EBAC ###\n\n"); //inicio de menu
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - Registrar usu�rio\n");
		printf("\t2 - Consultar usu�rio\n");
		printf("\t3 - Excluir usu�rio\n\n");
		printf("Op��o: "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
		system("cls");
		
		
		switch(opcao)
		{
			case 1:
			printf("Voc� escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:	
			printf("Voc� escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Voc� escolheu deletar nomes!\n");
			system("pause");
			break;
			
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;	
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	

