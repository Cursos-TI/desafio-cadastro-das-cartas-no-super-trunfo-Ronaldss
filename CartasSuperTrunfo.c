#include<stdio.h>
#include <stdlib.h>

int main(){

	char estado1, estado2;
	int codigo, codigo2, populacao2, pTuristicos2;
	int populacao, pTuristicos;           
	char cidade[100];
	char cidade2[100];
	float area, pib, area2, pib2, densPopulacional, densPopulacional2, pibCapita, pibCapita2;



	// Carta 1
	printf("\n");
 	printf("Por favor, não utilizar acentuação gráfica nem nomes compostos!\n");	
	printf("\n");
	printf("░░░░░░░░░░░░░░░░░░ PREENCHA OS DADOS DA CARTA 1 ░░░░░░░░░░░░░░░░\n");
	printf("\n");
	printf("Digite a letra do primeiro estado (A - H): \n");	
	scanf(" %c", &estado1);
		
	printf("Digite o código da carta (01 - 04): \n");
	scanf("%d", &codigo);

	printf("Digite o nome da cidade (SEM ESPACOS): \n");
	scanf("%s", cidade);

	printf("Digite o número de habitantes (int): \n");
	scanf("%d", &populacao);

	printf("Digite a área da cidade em KM² (float): \n");
	scanf("%f", &area);

	printf("Digite o PIB (float):\n");
	scanf("%f", &pib);

	printf("Digite a quantidade de pontos turísticos (int): \n");
	scanf("%d", &pTuristicos);

	densPopulacional = populacao / area;



	// Carta 2
	
	system("clear");
	printf("\n");
	printf("░░░░░░░░░░░░░░░░ PREENCHA OS DADOS DA CARTA 2 ░░░░░░░░░░░░░░░░\n");
	printf("\n");
	printf("Digite a letra do segundo estado (A - H): \n");	
	scanf(" %c", &estado2);
		
	printf("Digite o código da carta (01 - 04): \n");
	scanf("%d", &codigo2);

	printf("Digite o nome da cidade: \n");
	scanf("%s", cidade2);

	printf("Digite o número de habitantes (int): \n");
	scanf("%d", &populacao2);

	printf("Digite a área da cidade em KM² (float): \n");
	scanf("%f", &area2);

	printf("Digite o PIB (float):\n");
	scanf("%f", &pib2);

	printf("Digite a quantidade de pontos turísticos (int): \n");
	scanf("%d", &pTuristicos2);

	// Desafio: nível aventureiro
	densPopulacional2 = populacao2 / area2;
	pibCapita = pib / populacao;
	pibCapita2 = (float)(pib2 / populacao2);


	system("clear");
	printf("░░░░░░░░░░░░░░░░░ CARTAS CADASTRADAS ░░░░░░░░░░░░░░░░░░░░\n");

	// Write carta 1
	printf("\n");
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %c%02d\n", estado1, codigo);
	printf("Nome da cidade: %s\n", cidade);
	printf("População: %d\n", populacao);
	printf("Área: %.2f Km²\n", area);
	printf("PIB: %.2f bilhões de reais\n", pib);
	printf("Número de Pontos turísticos: %d\n", pTuristicos);
	printf("Densidade Populacional: %.2f hab/km \n", densPopulacional);
	printf("PIB per Capita: %.2f reais", pibCapita);
	printf("\n\n");

	printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
	
	// Write carta 2
	printf("\n");	
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %c%02d\n", estado2, codigo2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f Km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos turísticos: %d\n", pTuristicos2);
	printf("Densidade Populacional: %.2f hab/km\n", densPopulacional2);
	printf("PIB per Capita: %.2f reais\n", pibCapita2);
	printf("\n");
	printf("░░░░░░░░░░░░░░░░░░░░░░░░ FIM ░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
	printf("\n");
}