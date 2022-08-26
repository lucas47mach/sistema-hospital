#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct paciente {
	char nome[50];
	char CPF[20];
	int idade;
	char sexo[20];
	
};
int main() {
struct paciente ficha;
int opcao; 
int cont = 0;

setlocale(LC_ALL, "Portuguese");
system("color 7c");

	printf("Bem vindo a triagem do Covid-19!\nPor favor digite os dados necessarios para o seu cadastro:\n");
	printf("CPF:");
	gets(ficha.CPF);
	fflush(stdin);
	
	printf("Nome:");
	gets(ficha.nome);
	fflush(stdin);
	
	printf("Idade:");
	scanf("%i", &ficha.idade);
	fflush(stdin);
	
	printf("Sexo:");
	scanf("%s", &ficha.sexo);
	fflush(stdin);
	
	printf("Agora que voc? j? realizou seu cadastro, responda esse question?rio por gentileza!\nPor favor responda o question?rio com 'sim' ou 'nao'.\nQuestion?rio:\n");
	printf("\nVoc? tem febre? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 5;
	}
	else 
		{
			cont = cont + 0;
		}
	system("cls");	
	printf("\nTem dor de cabe?a? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 1;
	}
	else
		{
			cont = cont +0;
		}
	system("cls");
	printf("\nTem secre??o nasal ou espirros? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 1;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nTem dor/irrita??o na garganta? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 1;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nTem tosse seca? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 3;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nTem dificuldade respirat?ria? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 10;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nTem dores no corpo? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);	
	if (opcao == 1)
	{
		cont = cont + 1;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nTem diarreia? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);	
	fflush(stdin);	
	if (opcao == 1)
	{
		cont = cont + 1;
	}
	else
		{
			cont = cont + 0;
		}	
	system("cls");
	printf("\nEsteve em contato nos ?ltimos 14 dias, com um caso diagnosticado com Covid-19? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);
	fflush(stdin);
	if (opcao == 1)
	{
		cont = cont + 10;
	}
	else
		{
			cont = cont + 0;
		}
	system("cls");
	printf("\nEsteve em locais com grande aglomera??o? [1] para SIM [2] para N?O\n");
	scanf("%d", &opcao);
	fflush(stdin);	
	if (opcao == 1)
	{
		cont = cont + 3;
	}
	else
		{
			cont = cont + 0;
		}	
	system("cls");
	printf("A contagem ?: %d pontos", cont );
	printf("\nAgora voc? ser? encaminhado para uma Ala..!");
	
	if ( cont >= 0 && cont <= 9)
		{
		printf("\nVoc? foi para a Ala de Baixo Risco!");
		}
	else if ( cont >= 10 && cont <= 19)
	{
		printf("\nVoc? foi para a Ala de M?dio Risco!!");
	}
	else if ( cont >= 20 )
	{
		printf("\nVoc? foi para a Ala de Alto Risco!!!");
	}
	FILE *arq;
	arq = fopen ("Fichapaciente.txt", "a");
	fprintf(arq, "\nFicha paciente:\n");
	fprintf(arq, "\nCPF:\n%s\n", ficha.CPF);
	fprintf(arq, "\nNome:\n%s\n", ficha.nome);
	fprintf(arq, "\nIdade:\n%d\n", ficha.idade);
	fprintf(arq, "\nSexo:\n%s\n", ficha.sexo);
	fprintf(arq, "\nA contagem ?:\n%d pontos.\n", cont);
	fclose(arq);
}
