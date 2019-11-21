#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 2

typedef struct sDados
{
	char autor[150], editora[150], nome[150], doado[5];
	int paginas, cod;
}Dados;

Dados exatas[TAM], humanas[TAM], bio[TAM];

void menu();
void cadastrar();
void consultar();
void alterar();
void excluir();

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu();

	return 0;

}

void menu()
{
	int opcao, opcao1;

	do {
		printf("\t\t    SISTEMA DE REGISTRO DE LIVROS\n");

		printf("\n\tEscolha uma das op��es abaixo:\n\n");
		printf("\t  1 - Inserir obra. \n");
		printf("\t  2 - Consultar obra. \n");
		printf("\t  3 - Alterar obra. \n");
		printf("\t  4 - Excluir obra.\n");
		printf("\t  5 - Sair. \n\n");
		printf("\tEntre com a op��o desejada: ");
		scanf("%d", &opcao);

	system("cls");

		switch (opcao)
		{
			case 1:

				cadastrar();

				break;

			case 2:

				consultar();

				break;

			case 3:

				alterar();

				break;
				
			case 4:
				
				excluir();
				
				break;

			default:

				printf("\n\tEssa op��o n�o existe!\n\n");

				break;

		}
	} while (opcao != 5);

}

void cadastrar()
{
	int opcao1, i;

	printf("\t\tCATEGORIA\n\n");
	printf("\t   1 - Humanas.\n");
	printf("\t   2 - Exatas.\n");
	printf("\t   3 - Biom�dicas.\n\n");
	printf("\tEntre com a categoria desejada: ");
	scanf("%d", &opcao1);

	system("cls");

	if (opcao1 == 1)

		for (i = 0; i < TAM; i++)
		{
			printf("\t\tObra[%i]: Ci�ncias Humanas.", i + 1);

			printf("\n\nDigite o c�digo da obra: ");
			scanf("%i", &humanas[i].cod);
			fflush(stdin);
			printf("Digite o nome do volume: ");
			gets(humanas[i].nome);
			fflush(stdin);
			printf("Digite o nome do autor: ");
			gets(humanas[i].autor);
			fflush(stdin);
			printf("Informe se o volume foi doado. (Sim / N�o): ");
			gets(humanas[i].doado);
			fflush(stdin);
			printf("Digite a editora: ");
			scanf("%s", &humanas[i].editora);
			fflush(stdin);
			printf("Digite a quantidade de p�ginas do volume: ");
			scanf("%i", &humanas[i].paginas);
			fflush(stdin);

			system("cls");

		}

	if (opcao1 == 2)

		for (i = 0; i < TAM; i++)
		{
			printf("\t\tObra[%i]: Ci�ncias Exatas.", i + 1);

			printf("\n\nDigite o c�digo da obra: ");
			scanf("%i", &exatas[i].cod);
			fflush(stdin);
			printf("Digite o nome do volume : ");
			gets(exatas[i].nome);
			fflush(stdin);
			printf("Digite o nome do autor volume: ");
			gets(exatas[i].autor);
			fflush(stdin);
			printf("Informe se o volume  foi doado. (Sim /N�o): ");
			gets(exatas[i].doado);
			fflush(stdin);
			printf("Digite a editora: ");
			gets(exatas[i].editora);
			fflush(stdin);
			printf("Digite a quantidade de p�ginas do volume: ");
			scanf("%i", &exatas[i].paginas);
			fflush(stdin);

			system("cls");

		}

	if (opcao1 == 3)

		for (i = 0; i < TAM; i++)
		{
			printf("\t\tObra[%i]: Ci�ncias Biom�dicas.", i + 1);

			printf("\n\nDigite o c�digo da obra: ");
			scanf("%i", &bio[i].cod);
			fflush(stdin);
			printf("Digite o nome do volume: ");
			gets(bio[i].nome);
			fflush(stdin);
			printf("Digite o nome do autor: ");
			gets(bio[i].autor);
			fflush(stdin);
			printf("Informe se o volume %d foi doado. (Sim /N�o): ");
			gets(bio[i].doado);
			fflush(stdin);
			printf("Digite a editora: ");
			gets(bio[i].editora);
			fflush(stdin);
			printf("Digite a quantidade de p�ginas do volume: ");
			scanf("%i", &bio[i].paginas);
			fflush(stdin);

			system("cls");

		}
}

void consultar()
{
	char Busca_Obra[150], Livro_Doado[5];
	int busca1, busca, opcao1, i;
	
	printf("\t\tCATEGORIA\n\n");
	printf("\t   1 - Humanas.\n");
	printf("\t   2 - Exatas.\n");
	printf("\t   3 - Biom�dicas.\n\n");
	printf("\tEntre com a categoria desejada: ");
	scanf("%d", &opcao1);

	printf("\n================================================\n\n");

	printf("\t   1- C�digo da Obra.\n"); 
	printf("\t   2- Nome da Obra.\n"); 
	printf("\t   3- Listar obras de livros doados.\n\n"); 
	printf("\tEscolha uma das op��es: ");
	scanf("%i", &busca1);

	if (busca1 == 1)
	{
		printf("\n\nC�digo da Obra: ");
		scanf("%i", &busca);
		fflush(stdin);
	}

	if (busca1 == 2)
	{
		printf("\n\nNome da Obra: ");
		scanf(" %[^\n]s", Busca_Obra);
		setbuf(stdin, NULL);
		fflush(stdin);
	}

	if (busca1 == 3)
	{
		printf("\n\nO livro foi doado? ");
		scanf(" %[^\n]s", Livro_Doado);
		setbuf(stdin, NULL);
		fflush(stdin);
	}

	system("cls");

	for (i = 0; i < TAM; i++)
	{
		if (busca == humanas[i].cod && opcao1 == 1)
		{
			printf("\t\tObra: Ci�ncias Humanas.\n");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", humanas[i].cod, &humanas[i].doado);
			printf("\nNome da Obra: %s", &humanas[i].nome);
			printf("\nNome do Autor: %s", &humanas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &humanas[i].editora, humanas[i].paginas);
		}

		if ((strcmp(Busca_Obra, humanas[i].nome) == 0) && opcao1 == 1)
		{
			printf("\t\tObra: Ci�ncias Humanas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", humanas[i].cod, &humanas[i].doado);
			printf("\nNome da Obra: %s", &humanas[i].nome);
			printf("\nNome do Autor: %s", &humanas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &humanas[i].editora, humanas[i].paginas);
		}

		if (strcmp(Livro_Doado, humanas[i].doado) == 0 && opcao1 == 1)
		{
			printf("\t\tObra: Ci�ncias Humanas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", humanas[i].cod, &humanas[i].doado);
			printf("\nNome da Obra: %s", &humanas[i].nome);
			printf("\nNome do Autor: %s", &humanas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &humanas[i].editora, humanas[i].paginas);
		}

		if (((strcmp(Livro_Doado, humanas[i].doado) == 0) && opcao1 == 1) && (humanas[i].paginas >= 100 && humanas[i].paginas <= 300))
		{
			printf("\t\tObra: Ci�ncias Humanas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", humanas[i].cod, &humanas[i].doado);
			printf("\nNome da Obra: %s", &humanas[i].nome);
			printf("\nNome do Autor: %s", &humanas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &humanas[i].editora, humanas[i].paginas);
		}
	}

	for (i = 0; i < TAM; i++)
	{
		if (busca == exatas[i].cod && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.\n");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", exatas[i].cod, &exatas[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &exatas[i].editora, exatas[i].paginas);
		}

		if ((strcmp(Busca_Obra, exatas[i].nome) == 0) && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", exatas[i].cod, &exatas[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &exatas[i].editora, exatas[i].paginas);
		}

		if (strcmp(Livro_Doado, exatas[i].doado) == 0 && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", exatas[i].cod, &exatas[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &exatas[i].editora, exatas[i].paginas);
		}

		if (((strcmp(Livro_Doado, exatas[i].doado) == 0) && opcao1 == 2) && (exatas[i].paginas >= 100 && exatas[i].paginas <= 300))
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", exatas[i].cod, &exatas[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &exatas[i].editora, exatas[i].paginas);
		}
	}

	for (i = 0; i < TAM; i++)
	{
		if (busca == bio[i].cod && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.\n");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", bio[i].cod, &bio[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &bio[i].editora, bio[i].paginas);
		}

		if ((strcmp(Busca_Obra, bio[i].nome) == 0) && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", bio[i].cod, &bio[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &bio[i].editora, bio[i].paginas);
		}

		if (strcmp(Livro_Doado, bio[i].doado) == 0 && opcao1 == 2)
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", bio[i].cod, &bio[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &bio[i].editora, bio[i].paginas);
		}

		if (((strcmp(Livro_Doado, bio[i].doado) == 0) && opcao1 == 2) && (bio[i].paginas >= 100 && bio[i].paginas <= 300))
		{
			printf("\t\tObra: Ci�ncias Exatas.");

			printf("\nC�digo da Cataloga��o: %i    -    Doado: %s", bio[i].cod, &bio[i].doado);
			printf("\nNome da Obra: %s", &exatas[i].nome);
			printf("\nNome do Autor: %s", &exatas[i].autor);
			printf("\nEditora: %s    -    N� de P�ginas: %i\n\n", &bio[i].editora, bio[i].paginas);
		}
	}
}

void alterar()
{
	int cod_alt, opcao1, i;

	printf("\t\tCATEGORIA\n\n");
	printf("\t   1 - Humanas.\n");
	printf("\t   2 - Exatas.\n");
	printf("\t   3 - Biom�dicas.\n\n");
	printf("\tEntre com a categoria desejada: ");
	scanf("%d", &opcao1);
	
	printf("\n================================================\n\n");

	printf("\nDigite o c�digo da obra para alterar: ");
	scanf("%i", &cod_alt);

	for (i = 0; i < TAM; i++)
		if (cod_alt == humanas[i].cod && opcao1 == 1)
		{
			printf("\t\tAlterando Obra[%i]: Ci�ncias Humanas.\n\n", i + 1);

			printf("\tALTERANDO LIVRO: %s\n\n", humanas[i].nome);

			fflush(stdin);
			printf("\nDigite o nome do volume: ");
			gets(humanas[i].nome);
			fflush(stdin);
			printf("\nDigite o nome do autor: ");
			gets(humanas[i].autor);
			fflush(stdin);
			printf("\nInforme se o volume foi doado. (Sim / N�o): ");
			gets(humanas[i].doado);
			fflush(stdin);
			printf("\nDigite a editora: ");
			scanf("%s", &humanas[i].editora);
			fflush(stdin);
			printf("\nDigite a quantidade de p�ginas do volume: ");
			scanf("%i", &humanas[i].paginas);
			fflush(stdin);

		}
	else if (cod_alt == exatas[i].cod && opcao1 == 2)
	{
		printf("\t\tAlterando Obra[%i]: Ci�ncias Exatas.\n\n", i + 1);

		printf("\tALTERANDO LIVRO: %s\n\n", exatas[i].nome);

		fflush(stdin);
		printf("\nDigite o nome do volume: ");
		gets(exatas[i].nome);
		fflush(stdin);
		printf("\nDigite o nome do autor: ");
		gets(exatas[i].autor);
		fflush(stdin);
		printf("\nInforme se o volume foi doado. (Sim / N�o): ");
		gets(exatas[i].doado);
		fflush(stdin);
		printf("\nDigite a editora: ");
		scanf("%s", &exatas[i].editora);
		fflush(stdin);
		printf("\nDigite a quantidade de p�ginas do volume: ");
		scanf("%i", &exatas[i].paginas);
		fflush(stdin);

	}
	else if (cod_alt == bio[i].cod && opcao1 == 3)
	{
		printf("\t\tAlterando Obra[%i]: Ci�ncias Biom�dicas.\n\n", i + 1, bio[i].nome);

		printf("\tALTERANDO LIVRO: %s\n\n", bio[i].nome);

		fflush(stdin);
		printf("\nDigite o nome do volume: ");
		gets(bio[i].nome);
		fflush(stdin);
		printf("\nDigite o nome do autor: ");
		gets(bio[i].autor);
		fflush(stdin);
		printf("\nInforme se o volume foi doado. (Sim / N�o): ");
		gets(bio[i].doado);
		fflush(stdin);
		printf("\nDigite a editora: ");
		scanf("%s", &bio[i].editora);
		fflush(stdin);
		printf("\nDigite a quantidade de p�ginas do volume: ");
		scanf("%i", &bio[i].paginas);
		fflush(stdin);

	}
	else
		printf("\nC�digo Inexistente!\n");

}

void excluir(){
	
	int exc, i, opcao1;
	
	printf("\t\tCATEGORIA\n\n");
	printf("\t   1 - Humanas.\n");
	printf("\t   2 - Exatas.\n");
	printf("\t   3 - Biom�dicas.\n\n");
	printf("\tEntre com a categoria desejada: ");
	scanf("%d", &opcao1);
	
	printf("\n================================================\n\n");
	
	printf("\nDigite o c�digo da obra que deseja excluir: ");
	scanf("%i", &exc);
	
	for(i=0; i<TAM; i++){
		
		if((exc == humanas[i].cod) && (opcao1 == 1)){
			

			
		}
		
	}
	
}
