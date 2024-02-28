#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região

int main()
{
	int opcao=0; //Definindo variáveis
	int x=1;
	
	for(x=1;x=1;)
	{
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("### Cartório da EBAC ###\n\n"); //inicio de menu
		printf("Escolha a opção desejada no menu:\n\n");
		printf("\t1 - Registrar usuário\n");
		printf("\t2 - Consultar usuário\n");
		printf("\t3 - Excluir usuário\n\n");
		printf("Opção: "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usuário
	
		system("cls");
		
		
		switch(opcao)
		{
			case 1:
			printf("Você escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:	
			printf("Você escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Você escolheu deletar nomes!\n");
			system("pause");
			break;
			
			default:
			printf("Essa opção não está disponivel!\n");
			system("pause");
			break;	
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	

