#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Obrigado larissa!

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

	char estado1, estado2;
	int codigo, codigo2, populacao2, pTuristicos2;
	int populacao, pTuristicos;           
	char cidade[10];
	float area, pib, area2, pib2;
	char cidade2[10];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

	printf("Digite o nome da cidade: \n");
	scanf("%s", cidade);

	printf("Digite o número de habitantes (int): \n");
	scanf("%d", &populacao);

	printf("Digite a área da cidade em KM²: \n");
	scanf("%f", &area);

	printf("Digite o PIB:\n");
	scanf("%f", &pib);

	printf("Digite de pontos turísticos: \n");
	scanf("%d", &pTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("░░░░░░░░░░░░░░░░░ CARTAS CADASTRADAS ░░░░░░░░░░░░░░░░░░░░\n");

	// Saída carta 1
	printf("\n");
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %c%02d\n", estado1, codigo);
	printf("Nome da cidade: %s\n", cidade);
	printf("População: %d\n", populacao);
	printf("Área: %.2f Km²\n", area);
	printf("PIB: %.2f bilhões de reais\n", pib);
	printf("Número de Pontos turísticos: %d\n", pTuristicos);
	printf("\n");


    return 0;
}
